/*
 * XREFs of SepSetTokenBnoIsolation @ 0x140ADE5CC
 * Callers:
 *     SeSubProcessToken @ 0x140B84D74 (SeSubProcessToken.c)
 * Callees:
 *     SepSetTokenCachedHandles @ 0x140A3B748 (SepSetTokenCachedHandles.c)
 *     SepDereferenceCachedHandlesEntryInternal @ 0x140A90EB0 (SepDereferenceCachedHandlesEntryInternal.c)
 */

__int64 __fastcall SepSetTokenBnoIsolation(
        __int64 a1,
        char a2,
        __int128 *a3,
        unsigned int a4,
        struct _KLOCK_ENTRIES *a5)
{
  unsigned int v5; // ebx
  struct _KLOCK_ENTRIES *v10; // rsi
  __int64 v11; // r8
  __int128 v13; // xmm0
  _DWORD v14[14]; // [rsp+20h] [rbp-38h] BYREF

  v5 = 0;
  memset(v14, 0, 24);
  if ( a2 )
  {
    if ( (*(_DWORD *)(a1 + 200) & 0x4000) != 0 )
      return (unsigned int)-1073741637;
    if ( !a4 )
      return (unsigned int)-1073741776;
    v10 = a5;
    if ( !a5 || !a3 || !*(_WORD *)a3 || !*((_QWORD *)a3 + 1) )
      return (unsigned int)-1073741776;
    if ( *(_WORD *)a3 >= 0x110u )
      return (unsigned int)-1073741562;
    if ( a4 > 0xA )
      return (unsigned int)-1073741811;
  }
  else
  {
    if ( a4 )
      return (unsigned int)-1073741776;
    v10 = a5;
    if ( a5 || a3 && (*(_WORD *)a3 || *((_QWORD *)a3 + 1)) )
      return (unsigned int)-1073741776;
  }
  v11 = *(_QWORD *)(a1 + 1152);
  if ( v11 )
  {
    SepDereferenceCachedHandlesEntryInternal((struct _KTHREAD *)(*(_QWORD *)(a1 + 216) + 96LL), 0, v11, 0LL);
    *(_QWORD *)(a1 + 1152) = 0LL;
  }
  if ( a2 )
  {
    v13 = *a3;
    v14[0] = 1;
    *(_OWORD *)&v14[2] = v13;
    return (unsigned int)SepSetTokenCachedHandles((_QWORD *)a1, v14, a4, v10);
  }
  return v5;
}
