/*
 * XREFs of HMUnlockDestroyObject @ 0x140118670
 * Callers:
 *     <none>
 * Callees:
 *     HMUnlockObject @ 0x14009B9C0 (HMUnlockObject.c)
 *     ?HMMarkObjectDestroyWorker@@YAHPEAU_HEAD@@@Z @ 0x140118714 (-HMMarkObjectDestroyWorker@@YAHPEAU_HEAD@@@Z.c)
 */

__int64 __fastcall HMUnlockDestroyObject(__int64 a1)
{
  __int64 v1; // rbx
  int v2; // edx
  int v3; // r8d

  v1 = a1;
  if ( *(_DWORD *)(a1 + 8) == 1 )
  {
    HMMarkObjectDestroyWorker((struct _HEAD *)a1);
    return HMUnlockObject(v1, v2, v3);
  }
  return v1;
}
