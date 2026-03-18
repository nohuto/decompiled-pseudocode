/*
 * XREFs of BiConvertElementToRegistryData @ 0x1409D2544
 * Callers:
 *     BcdSetElementDataWithFlags @ 0x1409D30C4 (BcdSetElementDataWithFlags.c)
 * Callees:
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     memmove @ 0x14073D480 (memmove.c)
 *     BiConvertQualifiedPartitionToBootEnvironment @ 0x140778E74 (BiConvertQualifiedPartitionToBootEnvironment.c)
 *     BiStringFromGUID @ 0x1409D3908 (BiStringFromGUID.c)
 *     RtlStringFromGUIDEx @ 0x140A3EB50 (RtlStringFromGUIDEx.c)
 *     BiConvertNtDeviceToBootEnvironment @ 0x140B5B170 (BiConvertNtDeviceToBootEnvironment.c)
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall BiConvertElementToRegistryData(
        unsigned int a1,
        _DWORD *a2,
        unsigned int a3,
        __int64 a4,
        _QWORD *a5,
        unsigned int *a6)
{
  _BYTE *v6; // r15
  size_t v7; // rbx
  int v8; // ecx
  int v9; // eax
  int v10; // ebx
  unsigned int *v11; // rbx
  unsigned int v12; // esi
  _OWORD *v13; // rax
  _BYTE *v14; // rdi
  int v16; // ecx
  char v17; // r14
  _WORD *v18; // rcx
  unsigned int i; // eax
  int v20; // ecx
  int v21; // ecx
  unsigned int v22; // ebx
  int v23; // esi
  __int64 v24; // r13
  __int64 v25; // rax
  _WORD *v26; // r12
  size_t v27; // rbx
  int v28; // ecx
  int v29; // ecx
  _BYTE *v30; // rax
  _BYTE *Pool2; // rax
  void *Src; // [rsp+20h] [rbp-89h] BYREF
  __int64 v33; // [rsp+28h] [rbp-81h] BYREF
  void *v34; // [rsp+30h] [rbp-79h]
  _QWORD *v35; // [rsp+38h] [rbp-71h]
  unsigned int *v36; // [rsp+40h] [rbp-69h]
  __int128 v37; // [rsp+48h] [rbp-61h] BYREF
  char v38; // [rsp+60h] [rbp-49h] BYREF

  v35 = a5;
  v6 = a2;
  v36 = a6;
  v7 = a3;
  v33 = 5111808LL;
  v34 = &v38;
  Src = 0LL;
  v37 = 0LL;
  v8 = (HIBYTE(a1) & 0xF) - 1;
  if ( v8 )
  {
    v16 = v8 - 1;
    if ( !v16 )
    {
      v17 = 1;
      if ( (a3 & 1) == 0 )
      {
        v18 = a2;
        for ( i = a3 >> 1; i; --i )
        {
          if ( !*v18 )
          {
            v12 = a3;
            goto LABEL_51;
          }
          ++v18;
        }
        v12 = a3 + 2;
        if ( a3 + 2 < a3 )
          return (unsigned int)-1073741675;
        v17 = 0;
LABEL_51:
        Pool2 = (_BYTE *)ExAllocatePool2(0x102uLL);
        v14 = Pool2;
        if ( Pool2 )
        {
          memmove(Pool2, v6, v7);
          if ( !v17 )
            *(_WORD *)&v14[v12 - 2] = 0;
          goto LABEL_9;
        }
        goto LABEL_36;
      }
      return (unsigned int)-1073741788;
    }
    v20 = v16 - 1;
    if ( v20 )
    {
      v21 = v20 - 1;
      if ( !v21 )
      {
        if ( (a3 & 0xF) != 0 )
          return (unsigned int)-1073741788;
        v22 = a3 >> 4;
        v23 = 0;
        if ( a3 >> 4 )
          v23 = 78 * v22;
        v12 = v23 + 2;
        v24 = v22;
        v25 = ExAllocatePool2(0x102uLL);
        v14 = (_BYTE *)v25;
        if ( v25 )
        {
          v26 = (_WORD *)v25;
          if ( v22 )
          {
            do
            {
              BiStringFromGUID(v6, &v33);
              v27 = (unsigned int)(unsigned __int16)v33 + 2;
              memmove(v26, v34, v27);
              v26 = (_WORD *)((char *)v26 + v27);
              v6 += 16;
              --v24;
            }
            while ( v24 );
          }
          *v26 = 0;
          goto LABEL_9;
        }
LABEL_36:
        v10 = -1073741801;
        goto LABEL_10;
      }
      v28 = v21 - 1;
      if ( v28 )
      {
        v29 = v28 - 1;
        if ( v29 )
        {
          if ( v29 == 1 && (a3 & 7) != 0 )
            return (unsigned int)-1073741788;
          v12 = a3;
          v30 = (_BYTE *)ExAllocatePool2(0x102uLL);
          v14 = v30;
          if ( !v30 )
            goto LABEL_36;
          memmove(v30, v6, v7);
        }
        else
        {
          if ( a3 - 1 > 1 )
            return (unsigned int)-1073741788;
          v12 = 1;
          v14 = (_BYTE *)ExAllocatePool2(0x102uLL);
          if ( !v14 )
            goto LABEL_36;
          *v14 = *v6 != 0;
        }
      }
      else
      {
        v12 = 8;
        if ( a3 != 8 )
          return (unsigned int)-1073741788;
        v14 = (_BYTE *)ExAllocatePool2(0x102uLL);
        if ( !v14 )
          goto LABEL_36;
        *(_QWORD *)v14 = *(_QWORD *)v6;
      }
    }
    else
    {
      if ( a3 != 16 )
        return (unsigned int)-1073741788;
      v10 = RtlStringFromGUIDEx(a2, &v37, 1LL);
      if ( v10 < 0 )
        goto LABEL_10;
      v14 = (_BYTE *)*((_QWORD *)&v37 + 1);
      v12 = (unsigned __int16)v37 + 2;
    }
LABEL_9:
    v10 = 0;
    *v35 = v14;
    *v36 = v12;
    goto LABEL_10;
  }
  if ( *a2 == 6 )
    v9 = BiConvertQualifiedPartitionToBootEnvironment((__int64)a2, a3, &Src);
  else
    v9 = BiConvertNtDeviceToBootEnvironment(a2, a3, 0LL, &Src);
  v10 = v9;
  if ( v9 < 0 )
    goto LABEL_10;
  v11 = (unsigned int *)Src;
  v12 = *((_DWORD *)Src + 2) + 16;
  if ( *((_DWORD *)Src + 2) < 0xFFFFFFF0 )
  {
    v13 = (_OWORD *)ExAllocatePool2(0x102uLL);
    v14 = v13;
    if ( v13 )
    {
      *v13 = *(_OWORD *)(v6 + 4);
      memmove(v13 + 1, v11, v11[2]);
      if ( Src )
      {
        ExFreePoolWithTag(Src, 0x4B444342u);
        Src = 0LL;
      }
      goto LABEL_9;
    }
    goto LABEL_36;
  }
  v10 = -1073741811;
LABEL_10:
  if ( Src )
    ExFreePoolWithTag(Src, 0x4B444342u);
  return (unsigned int)v10;
}
