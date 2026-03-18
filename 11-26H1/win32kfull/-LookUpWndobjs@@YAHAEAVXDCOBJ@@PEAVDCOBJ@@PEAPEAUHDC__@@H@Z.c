/*
 * XREFs of ?LookUpWndobjs@@YAHAEAVXDCOBJ@@PEAVDCOBJ@@PEAPEAUHDC__@@H@Z @ 0x140310EB4
 * Callers:
 *     ?iOpenGLExtEscape@@YAHAEAVXDCOBJ@@HHPEAXH1@Z @ 0x140311624 (-iOpenGLExtEscape@@YAHAEAVXDCOBJ@@HHPEAXH1@Z.c)
 * Callees:
 *     ?vLock@DCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x14007E3C0 (-vLock@DCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 *     ?vUnlock@DCOBJ@@QEAAXXZ @ 0x140155DFC (-vUnlock@DCOBJ@@QEAAXXZ.c)
 *     UserGetHwnd @ 0x1402A496C (UserGetHwnd.c)
 */

__int64 __fastcall LookUpWndobjs(struct XDCOBJ *a1, struct DCOBJ *a2, HDC *a3, int a4)
{
  unsigned int v4; // edi
  HDC *v6; // rbx
  int v8; // ebp
  __int64 v9; // r15
  __int64 v10; // r9
  HDC v11; // rcx
  __int64 v13; // [rsp+40h] [rbp+8h] BYREF

  v4 = 0;
  v6 = a3;
  v8 = 0;
  v9 = *(_QWORD *)(*(_QWORD *)a1 + 48LL);
  while ( v8 < a4 )
  {
    DCOBJ::vLock(a2, *v6, (__int64)a3);
    if ( !*(_QWORD *)a2 )
      return 0xFFFFFFFFLL;
    if ( *(_QWORD *)(*(_QWORD *)a2 + 48LL) == v9 )
    {
      v11 = *v6;
      v13 = 0LL;
      if ( !(unsigned int)UserGetHwnd(v11, &v13, (__int64 *)v6, v10) )
        return 0xFFFFFFFFLL;
      v4 |= 1 << v8;
    }
    else
    {
      DCOBJ::vUnlock(a2);
      *v6 = 0LL;
    }
    ++v6;
    a2 = (struct DCOBJ *)((char *)a2 + 64);
    ++v8;
  }
  return v4;
}
