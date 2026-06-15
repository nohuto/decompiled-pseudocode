/*
 * XREFs of sub_140010460 @ 0x140010460
 * Callers:
 *     <none>
 * Callees:
 *     sub_1400105C8 @ 0x1400105C8 (sub_1400105C8.c)
 *     sub_140012A30 @ 0x140012A30 (sub_140012A30.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_140010460(__int64 a1, void *a2, __int64 *a3)
{
  __int64 *v3; // r14
  __int64 v4; // r15
  DWORD ProcessId; // esi
  struct _RTL_CRITICAL_SECTION *v6; // rbx
  __int64 v7; // rdi
  __int64 i; // rdi
  int v9; // esi
  ATL::CAtlException *v11; // rbx
  __int64 v12; // [rsp+20h] [rbp-78h]
  __int64 v13; // [rsp+30h] [rbp-68h]
  ATL::CAtlException *v14; // [rsp+38h] [rbp-60h] BYREF
  __int128 v15; // [rsp+40h] [rbp-58h] BYREF
  __int64 v16; // [rsp+50h] [rbp-48h]
  int v19; // [rsp+B8h] [rbp+20h]

  v3 = a3;
  v4 = a1;
  ProcessId = GetProcessId(a2);
  v6 = (struct _RTL_CRITICAL_SECTION *)(v4 + 16);
  EnterCriticalSection((LPCRITICAL_SECTION)(v4 + 16));
  v13 = v4 + 56;
  v7 = *(_QWORD *)(v4 + 56);
  if ( v7 )
  {
    for ( i = *(_QWORD *)(v7 + 8LL * (ProcessId % *(_DWORD *)(v4 + 72)));
          i && (*(_DWORD *)(i + 40) != ProcessId || *(_DWORD *)i != ProcessId);
          i = *(_QWORD *)(i + 32) )
    {
      ;
    }
    if ( i )
    {
      _InterlockedIncrement((volatile signed __int32 *)(i + 8));
LABEL_6:
      *v3 = i;
      v9 = 0;
      goto LABEL_9;
    }
  }
  try
  {
    v15 = 0LL;
    v16 = 0LL;
    LODWORD(v15) = 1;
    i = sub_1400105C8(v4 + 56, ProcessId, &v15);
    v12 = i;
  }
  catch ( ATL::CAtlException *v14 )
  {
    v11 = v14;
    if ( *(_DWORD *)v14 == -1073741571 )
      o__resetstkoflw();
    v19 = *(_DWORD *)v11;
    v9 = *(_DWORD *)v11;
    i = v12;
    v6 = (struct _RTL_CRITICAL_SECTION *)(v4 + 16);
    if ( v19 < 0 )
      goto LABEL_7;
    v4 = a1;
    v3 = a3;
  }
  v9 = sub_1400B6010(v4 - 8);
  if ( v9 >= 0 )
    goto LABEL_6;
LABEL_7:
  if ( i )
    sub_140012A30(v13, i);
LABEL_9:
  if ( v6 )
    LeaveCriticalSection(v6);
  return (unsigned int)v9;
}
