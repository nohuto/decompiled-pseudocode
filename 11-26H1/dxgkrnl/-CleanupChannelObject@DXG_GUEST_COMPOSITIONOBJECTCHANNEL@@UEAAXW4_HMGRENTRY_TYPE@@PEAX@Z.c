/*
 * XREFs of ?CleanupChannelObject@DXG_GUEST_COMPOSITIONOBJECTCHANNEL@@UEAAXW4_HMGRENTRY_TYPE@@PEAX@Z @ 0x1401BE390
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@DXGCOMPOSITIONSURFACEPROXY@@QEAAJXZ @ 0x1401C047C (-Release@DXGCOMPOSITIONSURFACEPROXY@@QEAAJXZ.c)
 */

__int64 __fastcall DXG_GUEST_COMPOSITIONOBJECTCHANNEL::CleanupChannelObject(__int64 a1, int a2, __int64 a3)
{
  __int64 result; // rax

  if ( a2 == 18 )
  {
    *(_BYTE *)(a3 + 13) = 1;
    *(_QWORD *)(a3 + 16) = 0LL;
    return DXGCOMPOSITIONSURFACEPROXY::Release((DXGCOMPOSITIONSURFACEPROXY *)a3);
  }
  return result;
}
