/*
 * XREFs of sub_140062200 @ 0x140062200
 * Callers:
 *     <none>
 * Callees:
 *     sub_140018FF0 @ 0x140018FF0 (sub_140018FF0.c)
 *     sub_140061328 @ 0x140061328 (sub_140061328.c)
 *     sub_1400627BC @ 0x1400627BC (sub_1400627BC.c)
 *     sub_140062830 @ 0x140062830 (sub_140062830.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_140062200(__int64 a1, void *a2, __int64 *a3)
{
  __int64 *v3; // r14
  __int64 v4; // rdi
  DWORD ThreadId; // r12d
  int v6; // esi
  __int64 v7; // rax
  __int64 v8; // rbx
  unsigned int *v10; // rbx
  int v11; // [rsp+30h] [rbp-78h] BYREF
  __int64 v12; // [rsp+38h] [rbp-70h]
  __int64 v13; // [rsp+40h] [rbp-68h]
  struct _RTL_CRITICAL_SECTION *v14; // [rsp+48h] [rbp-60h] BYREF
  __int128 v15; // [rsp+50h] [rbp-58h] BYREF
  ATL::CAtlException *v16; // [rsp+60h] [rbp-48h] BYREF
  int v19; // [rsp+C8h] [rbp+20h] BYREF

  v3 = a3;
  v4 = a1;
  v12 = 0LL;
  ThreadId = GetThreadId(a2);
  EnterCriticalSection((LPCRITICAL_SECTION)(v4 + 16));
  v14 = (struct _RTL_CRITICAL_SECTION *)(v4 + 16);
  v6 = sub_1400B6010(v4);
  if ( v6 < 0 )
    goto LABEL_12;
  v13 = v4 + 128;
  v11 = 0;
  v19 = 0;
  v7 = sub_140061328(v4 + 128, ThreadId, &v11, (unsigned int *)&v19, &v15);
  v8 = v7;
  if ( v7 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v7 + 8));
    goto LABEL_11;
  }
  try
  {
    v15 = 0LL;
    LODWORD(v15) = 1;
    v8 = sub_140062830(v4 + 128, ThreadId, &v15);
    v12 = v8;
  }
  catch ( ATL::CAtlException *v16 )
  {
    v10 = (unsigned int *)v16;
    if ( *(_DWORD *)v16 == -1073741571 )
      o__resetstkoflw();
    v19 = *v10;
    v6 = v19;
    v4 = a1;
    v8 = v12;
    if ( v19 < 0 )
      goto LABEL_7;
    v3 = a3;
  }
  v6 = sub_1400B6010(v4);
  if ( v6 >= 0 )
  {
LABEL_11:
    *v3 = v8;
    v6 = 0;
    goto LABEL_12;
  }
LABEL_7:
  if ( v8 )
    sub_1400627BC(v13, v8);
  sub_1400B6010(v4);
LABEL_12:
  sub_140018FF0(&v14);
  return (unsigned int)v6;
}
