/*
 * XREFs of HMCleanupGrantedHandle @ 0x14014EE04
 * Callers:
 *     HMFreeObject @ 0x1400F67F0 (HMFreeObject.c)
 *     ?HMDestroyUnlockedObjectWorkerAtomic@@YAXPEAU_HANDLEENTRY@@@Z @ 0x1401614EC (-HMDestroyUnlockedObjectWorkerAtomic@@YAXPEAU_HANDLEENTRY@@@Z.c)
 *     HMRemoveHandleForObject @ 0x140161860 (HMRemoveHandleForObject.c)
 * Callees:
 *     ?W32GetUserJobsGlobals@@YAAEAU_tagJOBSGLOBALS@@XZ @ 0x1401A1318 (-W32GetUserJobsGlobals@@YAAEAU_tagJOBSGLOBALS@@XZ.c)
 *     memmove @ 0x140243540 (memmove.c)
 */

struct _tagJOBSGLOBALS *__fastcall HMCleanupGrantedHandle(__int64 a1)
{
  struct _tagJOBSGLOBALS *result; // rax
  __int64 *i; // rbx
  __int64 v4; // rdx
  unsigned int v5; // r8d
  _QWORD *v6; // rcx

  result = W32GetUserJobsGlobals();
  for ( i = *(__int64 **)result; i; i = (__int64 *)*i )
  {
    v4 = 0LL;
    v5 = *((_DWORD *)i + 12);
    while ( (unsigned int)v4 < v5 )
    {
      v6 = (_QWORD *)(i[7] + 8 * v4);
      if ( *v6 == a1 )
      {
        result = (struct _tagJOBSGLOBALS *)memmove(v6, v6 + 1, 8LL * (v5 - (unsigned int)v4 - 1));
        --*((_DWORD *)i + 12);
        break;
      }
      v4 = (unsigned int)(v4 + 1);
    }
  }
  return result;
}
