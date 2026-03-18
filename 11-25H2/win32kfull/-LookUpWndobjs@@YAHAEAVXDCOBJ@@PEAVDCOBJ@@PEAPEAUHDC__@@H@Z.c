/*
 * XREFs of ?LookUpWndobjs@@YAHAEAVXDCOBJ@@PEAVDCOBJ@@PEAPEAUHDC__@@H@Z @ 0x140327CF0
 * Callers:
 *     ?iOpenGLExtEscape@@YAHAEAVXDCOBJ@@HHPEAXH1@Z @ 0x140328140 (-iOpenGLExtEscape@@YAHAEAVXDCOBJ@@HHPEAXH1@Z.c)
 * Callees:
 *     ?vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x14008A640 (-vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x14008AFD0 (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     UserGetHwnd @ 0x140287EEC (UserGetHwnd.c)
 */

__int64 __fastcall LookUpWndobjs(struct XDCOBJ *a1, struct DCOBJ *a2, HDC *a3, int a4)
{
  unsigned int v4; // esi
  int v8; // ebp
  __int64 v9; // r15
  HDC v10; // rcx
  __int64 v12; // [rsp+40h] [rbp+8h] BYREF

  v4 = 0;
  v8 = 0;
  v9 = *(_QWORD *)(*(_QWORD *)a1 + 48LL);
  while ( v8 < a4 )
  {
    XDCOBJ::vLock(a2, *a3);
    if ( !*(_QWORD *)a2 )
      return 0xFFFFFFFFLL;
    if ( *(_QWORD *)(*(_QWORD *)a2 + 48LL) == v9 )
    {
      v10 = *a3;
      v12 = 0LL;
      if ( !(unsigned int)UserGetHwnd(v10, &v12, (__int64 *)a3) )
        return 0xFFFFFFFFLL;
      v4 |= 1 << v8;
    }
    else
    {
      XDCOBJ::vUnlockFast(a2);
      *(_QWORD *)a2 = 0LL;
      *a3 = 0LL;
    }
    ++a3;
    a2 = (struct DCOBJ *)((char *)a2 + 72);
    ++v8;
  }
  return v4;
}
