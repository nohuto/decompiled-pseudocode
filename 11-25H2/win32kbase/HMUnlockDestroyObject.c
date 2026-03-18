/*
 * XREFs of HMUnlockDestroyObject @ 0x14014BE40
 * Callers:
 *     <none>
 * Callees:
 *     HMUnlockObject @ 0x140037A30 (HMUnlockObject.c)
 *     ?HMMarkObjectDestroyWorker@@YAHPEAU_HEAD@@@Z @ 0x14003E754 (-HMMarkObjectDestroyWorker@@YAHPEAU_HEAD@@@Z.c)
 */

int *__fastcall HMUnlockDestroyObject(int *a1, __int64 a2)
{
  int *v2; // rbx
  __int64 v3; // rdx

  v2 = a1;
  if ( a1[2] == 1 )
  {
    HMMarkObjectDestroyWorker((struct _HEAD *)a1, a2);
    return HMUnlockObject(v2, v3);
  }
  return v2;
}
