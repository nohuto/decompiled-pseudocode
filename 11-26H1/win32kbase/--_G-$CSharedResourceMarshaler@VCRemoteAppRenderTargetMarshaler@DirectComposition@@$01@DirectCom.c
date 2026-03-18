/*
 * XREFs of ??_G?$CSharedResourceMarshaler@VCRemoteAppRenderTargetMarshaler@DirectComposition@@$01@DirectComposition@@UEAAPEAXI@Z @ 0x14023B920
 * Callers:
 *     <none>
 * Callees:
 *     GreDeleteFastMutex @ 0x140042F30 (GreDeleteFastMutex.c)
 */

char *__fastcall DirectComposition::CSharedResourceMarshaler<DirectComposition::CRemoteAppRenderTargetMarshaler,2>::`scalar deleting destructor'(
        char *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  *(_QWORD *)a1 = &DirectComposition::CSharedResourceMarshaler<DirectComposition::CRemoteAppRenderTargetMarshaler,2>::`vftable';
  if ( (a2 & 1) != 0 )
    GreDeleteFastMutex(a1, a2, a3, a4);
  return a1;
}
