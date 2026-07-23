/*
 * XREFs of PfSnCleanupTrace @ 0x140AA69F4
 * Callers:
 *     PfSnBeginTrace @ 0x1409D002C (PfSnBeginTrace.c)
 *     PfSnEndTrace @ 0x140AA6328 (PfSnEndTrace.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140264E00 (ObfDereferenceObjectWithTag.c)
 *     ExReleaseRundownProtection_0 @ 0x1402657B0 (ExReleaseRundownProtection_0.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

void __fastcall PfSnCleanupTrace(__int64 a1)
{
  __int64 v1; // rsi
  bool v3; // zf
  unsigned __int64 v4; // rcx
  int v5; // ebp
  unsigned __int64 v6; // rax
  _QWORD *v7; // rdx
  unsigned __int64 v8; // rdi
  char v9; // al
  void *v10; // rcx
  _QWORD **v11; // rdi
  _QWORD *v12; // rcx
  void *v13; // rcx
  void *v14; // rcx
  _QWORD *v15; // rax

  v1 = a1 + 520;
  v3 = (*(_BYTE *)(a1 + 528) & 1) == 0;
  v4 = *(_QWORD *)(a1 + 520);
  if ( !v3 && v4 )
    v4 ^= v1;
  v5 = *(_BYTE *)(v1 + 8) & 1;
  if ( v4 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        v6 = *(_QWORD *)v4;
        v7 = (_QWORD *)v4;
        if ( !*(_QWORD *)v4 )
        {
          v7 = (_QWORD *)(v4 + 8);
          v6 = *(_QWORD *)(v4 + 8);
          if ( !v6 )
            break;
        }
        if ( v5 )
          v4 ^= v6;
        else
          v4 = v6;
        *v7 = 0LL;
      }
      v8 = *(_QWORD *)(v4 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
      if ( v5 && v8 )
        v8 ^= v4;
      ExFreePoolWithTag((PVOID)v4, 0);
      if ( !v8 )
        break;
      v4 = v8;
    }
  }
  v9 = *(_BYTE *)(a1 + 528);
  *(_QWORD *)v1 = 0LL;
  *(_QWORD *)(a1 + 528) = 0LL;
  if ( (v9 & 1) != 0 )
    *(_BYTE *)(a1 + 528) = 1;
  v10 = *(void **)(a1 + 584);
  if ( v10 )
    ExFreePoolWithTag(v10, 0);
  v11 = (_QWORD **)(a1 + 104);
  while ( 1 )
  {
    v12 = *v11;
    if ( *v11 == v11 )
      break;
    if ( (_QWORD **)v12[1] != v11 || (v15 = (_QWORD *)*v12, *(_QWORD **)(*v12 + 8LL) != v12) )
      __fastfail(3u);
    *v11 = v15;
    v15[1] = v11;
    --*(_DWORD *)(a1 + 120);
    ExFreePoolWithTag(v12, 0);
  }
  v13 = *(void **)(a1 + 472);
  if ( v13 )
    ExFreePoolWithTag(v13, 0);
  v14 = *(void **)(a1 + 352);
  if ( v14 )
    ObfDereferenceObjectWithTag(v14, 0x73576650u);
  if ( (*(_BYTE *)(a1 + 486) & 2) != 0 )
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)&stru_140E66D40.Padding[3]);
}
