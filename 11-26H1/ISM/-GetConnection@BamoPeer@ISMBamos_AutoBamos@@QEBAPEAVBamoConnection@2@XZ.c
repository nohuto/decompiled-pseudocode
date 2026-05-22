/*
 * XREFs of ?GetConnection@BamoPeer@ISMBamos_AutoBamos@@QEBAPEAVBamoConnection@2@XZ @ 0x18004D3A4
 * Callers:
 *     ?CreateInputAttemptedDeliveryClientProxy@@YAJPEAVBamoPeer@ISMBamos_AutoBamos@@PEAPEAVBamoInputAttemptedDeliveryClientProxy@@@Z @ 0x18004C7D0 (-CreateInputAttemptedDeliveryClientProxy@@YAJPEAVBamoPeer@ISMBamos_AutoBamos@@PEAPEAVBamoInputAt.c)
 *     ?GetDesktop@ShellGesturesClientProxy@@AEAAJXZ @ 0x18004C8B0 (-GetDesktop@ShellGesturesClientProxy@@AEAAJXZ.c)
 *     ?GetDesktop@DragManagerClientProxy@@AEAAJXZ @ 0x18004D0A8 (-GetDesktop@DragManagerClientProxy@@AEAAJXZ.c)
 *     ??0WindowsMessageDeliveryProxy@@QEAA@PEAVBamoPeer@ISMBamos_AutoBamos@@@Z @ 0x18004D25C (--0WindowsMessageDeliveryProxy@@QEAA@PEAVBamoPeer@ISMBamos_AutoBamos@@@Z.c)
 *     ?CreateInputObserverClientProxy@@YAJPEAVBamoPeer@ISMBamos_AutoBamos@@PEAPEAVBamoInputObserverClientProxy@@@Z @ 0x18013AB5C (-CreateInputObserverClientProxy@@YAJPEAVBamoPeer@ISMBamos_AutoBamos@@PEAPEAVBamoInputObserverCli.c)
 *     ?CreateSystemContextEndpointProxy@@YAJPEAVBamoPeer@ISMBamos_AutoBamos@@PEAPEAVBamoSystemContextEndpointProxy@@@Z @ 0x1801437DC (-CreateSystemContextEndpointProxy@@YAJPEAVBamoPeer@ISMBamos_AutoBamos@@PEAPEAVBamoSystemContextE.c)
 *     ?CreateEdgyControllerClientProxy@@YAJPEAVBamoPeer@ISMBamos_AutoBamos@@PEAPEAVBamoEdgyControllerClientProxy@@@Z @ 0x18015974C (-CreateEdgyControllerClientProxy@@YAJPEAVBamoPeer@ISMBamos_AutoBamos@@PEAPEAVBamoEdgyControllerC.c)
 *     ?CreateShellHandwritingClientProxy@@YAJPEAVBamoPeer@ISMBamos_AutoBamos@@PEAPEAVBamoShellHandwritingHostClientProxy@@@Z @ 0x18015EB0C (-CreateShellHandwritingClientProxy@@YAJPEAVBamoPeer@ISMBamos_AutoBamos@@PEAPEAVBamoShellHandwrit.c)
 *     ?CreateDeviceDockClientProxy@@YAJPEAVBamoPeer@ISMBamos_AutoBamos@@PEAPEAVBamoDeviceDockClientProxy@@@Z @ 0x18018670C (-CreateDeviceDockClientProxy@@YAJPEAVBamoPeer@ISMBamos_AutoBamos@@PEAPEAVBamoDeviceDockClientPro.c)
 * Callees:
 *     <none>
 */

struct ISMBamos_AutoBamos::BamoConnection *__fastcall ISMBamos_AutoBamos::BamoPeer::GetConnection(
        ISMBamos_AutoBamos::BamoPeer *this)
{
  __int64 v1; // rcx
  struct ISMBamos_AutoBamos::BamoConnection *result; // rax

  v1 = *(_QWORD *)(*((_QWORD *)this + 4) + 32LL);
  result = 0LL;
  if ( *(int *)(v1 + 8) > 0 )
    return *(struct ISMBamos_AutoBamos::BamoConnection **)(v1 + 16);
  return result;
}
