/*
 * XREFs of sub_14006E6C0 @ 0x14006E6C0
 * Callers:
 *     sub_14006B9F0 @ 0x14006B9F0 (sub_14006B9F0.c)
 *     sub_14006D390 @ 0x14006D390 (sub_14006D390.c)
 * Callees:
 *     sub_140004140 @ 0x140004140 (sub_140004140.c)
 *     sub_140006BCC @ 0x140006BCC (sub_140006BCC.c)
 *     sub_140008C08 @ 0x140008C08 (sub_140008C08.c)
 *     sub_14000C2A8 @ 0x14000C2A8 (sub_14000C2A8.c)
 *     sub_140011760 @ 0x140011760 (sub_140011760.c)
 *     sub_1400118C0 @ 0x1400118C0 (sub_1400118C0.c)
 *     sub_14001285C @ 0x14001285C (sub_14001285C.c)
 *     sub_140018FF0 @ 0x140018FF0 (sub_140018FF0.c)
 *     sub_14002C780 @ 0x14002C780 (sub_14002C780.c)
 *     sub_140033E34 @ 0x140033E34 (sub_140033E34.c)
 *     sub_14003953C @ 0x14003953C (sub_14003953C.c)
 *     sub_140043088 @ 0x140043088 (sub_140043088.c)
 *     memcpy @ 0x14004A6A0 (memcpy.c)
 *     sub_14006E480 @ 0x14006E480 (sub_14006E480.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_14006E6C0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v8; // ebx
  int v9; // edx
  __int64 v10; // rdx
  __int64 v11; // rcx
  unsigned __int16 **v12; // r15
  void *v13; // rax
  void **v14; // rbx
  void *v15; // rax
  __int64 v16; // rcx
  __int64 *v17; // rbx
  int v18; // edi
  int v19; // edx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 *v23; // rax
  ATL::CAtlException *v24; // rbx
  __int64 v25; // [rsp+30h] [rbp-48h] BYREF
  struct _RTL_CRITICAL_SECTION *v26; // [rsp+38h] [rbp-40h] BYREF
  ATL::CAtlException *v27; // [rsp+40h] [rbp-38h] BYREF
  __int64 v28; // [rsp+48h] [rbp-30h] BYREF
  __int64 v29; // [rsp+50h] [rbp-28h] BYREF
  char v30; // [rsp+58h] [rbp-20h]
  _UNKNOWN *retaddr; // [rsp+78h] [rbp+0h]

  v8 = sub_14003953C((int *)a2);
  if ( v8 >= 0 )
  {
    *(_QWORD *)(a1 + 232) = *(_QWORD *)(a2 + 56);
    *(_OWORD *)(a1 + 240) = *(_OWORD *)(a2 + 68);
    *(_DWORD *)(a1 + 256) = *(_DWORD *)a2;
    *(_BYTE *)(a1 + 16) = *(_BYTE *)(a2 + 12);
    *(_BYTE *)(a1 + 313) = *(_BYTE *)(a2 + 13);
    sub_1400118C0((void **)(a1 + 8), 0LL);
    v8 = sub_140011760(v11, v10, *(_QWORD *)(a2 + 32), (_QWORD *)(a1 + 8));
    if ( v8 < 0 )
    {
      v9 = 256;
      goto LABEL_3;
    }
    v12 = (unsigned __int16 **)(a1 + 216);
    v13 = CoTaskMemAlloc(*(unsigned int *)(a2 + 40));
    sub_140008C08((void **)(a1 + 216), v13);
    if ( !*(_QWORD *)(a1 + 216) )
    {
      v8 = -2147024882;
      v9 = 259;
      goto LABEL_3;
    }
    memcpy(*(void **)(a1 + 216), *(const void **)(a2 + 48), *(unsigned int *)(a2 + 40));
    v14 = (void **)(a1 + 224);
    if ( *(_DWORD *)(a2 + 16) )
    {
      v15 = CoTaskMemAlloc(*(unsigned int *)(a2 + 16));
      sub_140008C08((void **)(a1 + 224), v15);
      if ( !*v14 )
      {
        v8 = -2147024882;
        v9 = 265;
        goto LABEL_3;
      }
      memcpy(*v14, *(const void **)(a2 + 24), *(unsigned int *)(a2 + 16));
    }
    else
    {
      v28 = a1 + 224;
      v29 = 0LL;
      v30 = 1;
      v8 = sub_140006BCC(*v12, &v29);
      sub_140033E34((__int64)&v28);
      if ( v8 < 0 )
      {
        v9 = 271;
        goto LABEL_3;
      }
    }
    if ( !*(_BYTE *)(a1 + 313) )
    {
      v16 = *(_QWORD *)(a1 + 264);
      *(_QWORD *)(a1 + 264) = 0LL;
      if ( v16 )
        sub_1400B6010(v16);
      v8 = sub_14006E480(
             a3,
             *(_QWORD *)(a2 + 32),
             *(_QWORD *)(a2 + 56),
             *(unsigned __int8 *)(a2 + 12),
             (__int64)*v12,
             (__int64 *)(a1 + 264));
      if ( v8 < 0 )
      {
        v9 = 277;
        goto LABEL_3;
      }
      if ( *(_BYTE *)(a2 + 84) )
      {
        v17 = (__int64 *)(a1 + 24);
        v18 = sub_140043088(*(_QWORD *)(a1 + 264), a2, (__int64 *)(a1 + 24));
        if ( v18 < 0 )
        {
          v19 = 283;
LABEL_22:
          sub_14000C2A8((int)retaddr, v19, (int)"avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp", v18);
          return (unsigned int)v18;
        }
        v18 = sub_14002C780(*v17);
        if ( v18 < 0 )
        {
          v19 = 284;
          goto LABEL_22;
        }
        v18 = sub_140004140(*v17, a4);
        if ( v18 < 0 )
        {
          v19 = 285;
          goto LABEL_22;
        }
        *(_DWORD *)(a1 + 316) = *(_DWORD *)(*v17 + 144);
      }
    }
    EnterCriticalSection(&stru_1400E8750);
    v26 = &stru_1400E8750;
    try
    {
      v25 = a1;
      v23 = sub_14001285C(v21, &v25, v22, qword_1400E7C38);
      if ( qword_1400E7C38 )
        *(_QWORD *)(qword_1400E7C38 + 8) = v23;
      else
        qword_1400E7C40 = (__int64)v23;
      qword_1400E7C38 = (__int64)v23;
    }
    catch ( ATL::CAtlException *v27 )
    {
      v24 = v27;
      if ( *(_DWORD *)v27 == -1073741571 )
        o__resetstkoflw();
      LODWORD(v25) = *(_DWORD *)v24;
      v8 = v25;
      if ( (int)v25 < 0 )
      {
        sub_14000C2A8((int)retaddr, 296, (int)"avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp", v25);
        goto LABEL_34;
      }
    }
    v8 = 0;
LABEL_34:
    sub_140018FF0(&v26);
    return (unsigned int)v8;
  }
  v9 = 248;
LABEL_3:
  sub_14000C2A8((int)retaddr, v9, (int)"avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp", v8);
  return (unsigned int)v8;
}
