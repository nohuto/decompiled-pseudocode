/*
 * XREFs of ??_GCPTPEngine@@UEAAPEAXI@Z @ 0x140225150
 * Callers:
 *     <none>
 * Callees:
 *     GreDeleteFastMutex @ 0x14001E920 (GreDeleteFastMutex.c)
 *     ??1CPTPEngine@@UEAA@XZ @ 0x1402250FC (--1CPTPEngine@@UEAA@XZ.c)
 */

CPTPEngine *__fastcall CPTPEngine::`scalar deleting destructor'(CPTPEngine *Buffer, char a2)
{
  CPTPEngine::~CPTPEngine(Buffer);
  if ( (a2 & 1) != 0 )
    GreDeleteFastMutex((char *)Buffer);
  return Buffer;
}
