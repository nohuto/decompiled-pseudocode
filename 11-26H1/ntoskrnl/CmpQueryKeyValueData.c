/*
 * XREFs of CmpQueryKeyValueData @ 0x140941E50
 * Callers:
 *     CmQueryValueKey @ 0x1408DEEA0 (CmQueryValueKey.c)
 *     NtEnumerateValueKey @ 0x1409412A0 (NtEnumerateValueKey.c)
 *     CmEnumerateValueFromLayeredKey @ 0x1409426FC (CmEnumerateValueFromLayeredKey.c)
 *     CmEnumerateValueKeyFromMergedView @ 0x140B0144C (CmEnumerateValueKeyFromMergedView.c)
 * Callees:
 *     memmove @ 0x140742080 (memmove.c)
 *     HvpReleaseCellFlat @ 0x1408DB7A0 (HvpReleaseCellFlat.c)
 *     HvpReleaseCellPaged @ 0x1408DD970 (HvpReleaseCellPaged.c)
 *     CmpGetValueData @ 0x140942400 (CmpGetValueData.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall CmpQueryKeyValueData(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        _DWORD *Size,
        unsigned int a6,
        unsigned int *a7)
{
  __int64 v8; // r10
  unsigned int v9; // esi
  void *v10; // r12
  _DWORD *v11; // rdi
  unsigned int v12; // edx
  unsigned int v13; // r9d
  unsigned int v14; // r15d
  size_t v15; // r8
  unsigned int v16; // ecx
  unsigned int v17; // r14d
  unsigned int v18; // ecx
  unsigned int v19; // r8d
  unsigned int i; // eax
  char ValueData; // al
  int v22; // ecx
  int v24; // r9d
  int v25; // r9d
  unsigned int v26; // edx
  unsigned int v27; // ecx
  unsigned int v28; // r8d
  unsigned int v29; // r8d
  unsigned int v30; // esi
  char v31; // al
  int v32; // ecx
  unsigned int v33; // ecx
  unsigned int v34; // ecx
  unsigned int v35; // edx
  unsigned int v36; // eax
  unsigned int v37; // edx
  unsigned int v38; // ecx
  unsigned int v39; // r8d
  unsigned int v40; // r8d
  unsigned int v41; // esi
  unsigned int v42; // [rsp+4Ch] [rbp-5Ch]
  void *Src; // [rsp+50h] [rbp-58h] BYREF
  __int64 v44[2]; // [rsp+58h] [rbp-50h] BYREF
  __int64 v45; // [rsp+68h] [rbp-40h]
  unsigned int v47; // [rsp+C0h] [rbp+18h]
  __int64 v48; // [rsp+C8h] [rbp+20h] BYREF

  v8 = a1;
  v9 = 0;
  v10 = 0LL;
  Src = 0LL;
  LOBYTE(v48) = 0;
  v44[0] = 0xFFFFFFFFLL;
  v45 = *(_QWORD *)(a1 + 32);
  v11 = Size;
  v44[1] = a3;
  LOWORD(v12) = 2 * *(_WORD *)(a3 + 2);
  if ( (*(_BYTE *)(a3 + 16) & 1) == 0 )
    LOWORD(v12) = *(_WORD *)(a3 + 2);
  if ( a4 == 3 )
    goto LABEL_4;
  if ( a4 )
  {
    v24 = a4 - 1;
    if ( !v24 )
    {
LABEL_4:
      v13 = *(_DWORD *)(a3 + 4);
      v42 = v13;
      v14 = v13 + 0x80000000;
      if ( v13 < 0x80000000 )
        v14 = *(_DWORD *)(a3 + 4);
      LODWORD(Size) = v14;
      v15 = (unsigned __int16)v12;
      v16 = v14 + (unsigned __int16)v12 + 20;
      v47 = 0;
      if ( v14 )
      {
        v36 = ((unsigned __int16)v12 + 27) & 0xFFFFFFF8;
        v47 = v36;
        if ( v36 > (unsigned int)(unsigned __int16)v12 + 20 )
          v16 = v36 + v14;
      }
      v17 = 0;
      *a7 = v16;
      v18 = a6;
      if ( a6 < 0x14 )
      {
        v17 = -1073741789;
      }
      else
      {
        *v11 = 0;
        v11[1] = *(_DWORD *)(a3 + 12);
        v11[3] = v14;
        v11[4] = (unsigned __int16)v12;
        if ( v18 - 20 < (unsigned __int16)v12 )
        {
          v15 = v18 - 20;
          v17 = -2147483643;
        }
        if ( (*(_BYTE *)(a3 + 16) & 1) != 0 )
        {
          v19 = (unsigned int)v15 >> 1;
          if ( v19 >= *(unsigned __int16 *)(a3 + 2) )
            v19 = *(unsigned __int16 *)(a3 + 2);
          for ( i = 0; i < v19; ++i )
            *((_WORD *)v11 + i + 10) = *(unsigned __int8 *)(i + a3 + 20);
        }
        else
        {
          memmove(v11 + 5, (const void *)(a3 + 20), v15);
          v13 = v42;
          v8 = a1;
        }
        if ( v14 )
        {
          if ( v13 >= 0x80000000 )
          {
            v10 = (void *)(a3 + 8);
            Src = (void *)(a3 + 8);
          }
          else
          {
            ValueData = CmpGetValueData(*(_QWORD *)(v8 + 32), (__int64)&Src, (__int64)&v48, (__int64)v44);
            v22 = v17;
            if ( !ValueData )
              v22 = -1073741670;
            v17 = v22;
            v14 = (unsigned int)Size;
            v10 = Src;
          }
          v11[2] = v47;
          if ( a6 >= v47 )
            v9 = a6 - v47;
          if ( v9 >= v14 )
            v9 = v14;
          else
            v17 = -2147483643;
          if ( v10 )
            memmove((char *)v11 + v47, v10, v9);
        }
        else
        {
          v11[2] = -1;
        }
      }
      goto LABEL_32;
    }
    v25 = v24 - 1;
    if ( v25 )
    {
      if ( v25 == 2 )
      {
        v37 = *(_DWORD *)(a3 + 4);
        v38 = v37 + 0x80000000;
        if ( v37 < 0x80000000 )
          v38 = *(_DWORD *)(a3 + 4);
        LODWORD(Size) = v38;
        v17 = 0;
        *a7 = v38 + 8;
        v39 = a6;
        if ( a6 < 8 )
        {
          v17 = -1073741789;
        }
        else
        {
          *v11 = *(_DWORD *)(a3 + 12);
          v11[1] = v38;
          v40 = v39 - 8;
          v41 = v38;
          if ( v40 < v38 )
          {
            v41 = v40;
            v17 = -2147483643;
          }
          if ( v38 )
          {
            if ( v37 >= 0x80000000 )
            {
              v10 = (void *)(a3 + 8);
              Src = (void *)(a3 + 8);
            }
            else
            {
              if ( !(unsigned __int8)CmpGetValueData(*(_QWORD *)(v8 + 32), (__int64)&Src, (__int64)&v48, (__int64)v44) )
                v17 = -1073741670;
              v10 = Src;
            }
            if ( v10 )
              memmove(v11 + 2, v10, v41);
          }
        }
      }
      else
      {
        v17 = -1073741811;
      }
    }
    else
    {
      v26 = *(_DWORD *)(a3 + 4);
      v27 = v26 + 0x80000000;
      if ( v26 < 0x80000000 )
        v27 = *(_DWORD *)(a3 + 4);
      LODWORD(Size) = v27;
      v17 = 0;
      *a7 = v27 + 12;
      v28 = a6;
      if ( a6 < 0xC )
      {
        v17 = -1073741789;
      }
      else
      {
        *v11 = 0;
        v11[1] = *(_DWORD *)(a3 + 12);
        v11[2] = v27;
        v29 = v28 - 12;
        v30 = v27;
        if ( v29 < v27 )
        {
          v30 = v29;
          v17 = -2147483643;
        }
        if ( v27 )
        {
          if ( v26 >= 0x80000000 )
          {
            v10 = (void *)(a3 + 8);
            Src = (void *)(a3 + 8);
          }
          else
          {
            v31 = CmpGetValueData(*(_QWORD *)(v8 + 32), (__int64)&Src, (__int64)&v48, (__int64)v44);
            v32 = v17;
            if ( !v31 )
              v32 = -1073741670;
            v17 = v32;
            v10 = Src;
          }
          if ( v10 )
            memmove(v11 + 3, v10, v30);
        }
      }
    }
  }
  else
  {
    v12 = (unsigned __int16)v12;
    v17 = 0;
    *a7 = (unsigned __int16)v12 + 12;
    v33 = a6;
    if ( a6 < 0xC )
    {
      v17 = -1073741789;
    }
    else
    {
      *v11 = 0;
      v11[1] = *(_DWORD *)(a3 + 12);
      v11[2] = (unsigned __int16)v12;
      v34 = v33 - 12;
      if ( v34 < (unsigned __int16)v12 )
      {
        v12 = v34;
        v17 = -2147483643;
      }
      if ( (*(_BYTE *)(a3 + 16) & 1) != 0 )
      {
        v35 = v12 >> 1;
        if ( v35 >= *(unsigned __int16 *)(a3 + 2) )
          v35 = *(unsigned __int16 *)(a3 + 2);
        while ( v9 < v35 )
        {
          *((_WORD *)v11 + v9 + 6) = *(unsigned __int8 *)(v9 + a3 + 20);
          ++v9;
        }
      }
      else
      {
        memmove(v11 + 3, (const void *)(a3 + 20), v12);
      }
    }
  }
LABEL_32:
  if ( v10 && v10 != (void *)(a3 + 8) )
  {
    if ( (_BYTE)v48 == 1 )
    {
      ExFreePoolWithTag(v10, 0);
    }
    else if ( (*(_BYTE *)(v45 + 140) & 1) != 0 )
    {
      HvpReleaseCellFlat(v45, (__int64)v44);
    }
    else
    {
      HvpReleaseCellPaged(v45, (unsigned int *)v44);
    }
  }
  return v17;
}
