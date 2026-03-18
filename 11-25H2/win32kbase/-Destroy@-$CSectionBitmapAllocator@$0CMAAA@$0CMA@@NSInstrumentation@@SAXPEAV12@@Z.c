/*
 * XREFs of ?Destroy@?$CSectionBitmapAllocator@$0CMAAA@$0CMA@@NSInstrumentation@@SAXPEAV12@@Z @ 0x140242118
 * Callers:
 *     ??1?$CSectionEntry@$0CMAAA@$0CMA@@NSInstrumentation@@AEAA@XZ @ 0x140241EA4 (--1-$CSectionEntry@$0CMAAA@$0CMA@@NSInstrumentation@@AEAA@XZ.c)
 *     ?Initialize@?$CSectionEntry@$0CMAAA@$0CMA@@NSInstrumentation@@AEAA_NXZ @ 0x140242340 (-Initialize@-$CSectionEntry@$0CMAAA@$0CMA@@NSInstrumentation@@AEAA_NXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall NSInstrumentation::CSectionBitmapAllocator<180224,704>::Destroy(PVOID *P)
{
  struct _RTL_BITMAP *v2; // rcx

  v2 = (struct _RTL_BITMAP *)((unsigned __int64)P[3] ^ (unsigned __int64)P[2]);
  if ( v2 )
    RtlFindSetBits(v2, 1u, 0);
  if ( *P )
    ExFreePoolWithTag(*P, 0);
  if ( P[2] != P[3] )
    ExFreePoolWithTag((PVOID)((unsigned __int64)P[2] ^ (unsigned __int64)P[3]), 0);
  ExFreePoolWithTag(P, 0);
}
