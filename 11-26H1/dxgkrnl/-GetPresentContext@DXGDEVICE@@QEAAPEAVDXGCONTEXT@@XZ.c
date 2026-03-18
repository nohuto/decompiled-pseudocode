/*
 * XREFs of ?GetPresentContext@DXGDEVICE@@QEAAPEAVDXGCONTEXT@@XZ @ 0x1401C2FE0
 * Callers:
 *     ?CheckPrimaryContentWorker@VIDPNSOURCEINFO@@AEAAJPEAVDXGALLOCATION@@@Z @ 0x1401C9700 (-CheckPrimaryContentWorker@VIDPNSOURCEINFO@@AEAAJPEAVDXGALLOCATION@@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 */

struct DXGCONTEXT *__fastcall DXGDEVICE::GetPresentContext(DXGDEVICE *this)
{
  struct DXGCONTEXT **v2; // rbx
  struct DXGCONTEXT *i; // rcx
  struct DXGCONTEXT *result; // rax

  if ( !*((_BYTE *)this + 72) && !ExIsResourceAcquiredExclusiveLite(*((PERESOURCE *)this + 17)) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 6085;
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"IsDeviceLockExclusiveOwner()", 6085LL, 0LL, 0LL, 0LL, 0LL);
  }
  v2 = (struct DXGCONTEXT **)((char *)this + 496);
  for ( i = *v2; ; i = *(struct DXGCONTEXT **)i )
  {
    result = 0LL;
    if ( i != (struct DXGCONTEXT *)v2 )
      result = i;
    if ( !result )
      break;
    result = i;
    if ( i == (struct DXGCONTEXT *)v2 )
      result = 0LL;
    if ( *((_BYTE *)result + 435) )
      break;
  }
  return result;
}
