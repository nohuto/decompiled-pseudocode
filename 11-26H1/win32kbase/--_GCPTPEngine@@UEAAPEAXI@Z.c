/*
 * XREFs of ??_GCPTPEngine@@UEAAPEAXI@Z @ 0x140226D20
 * Callers:
 *     <none>
 * Callees:
 *     GreDeleteFastMutex @ 0x140042F30 (GreDeleteFastMutex.c)
 *     ??1CPTPEngine@@UEAA@XZ @ 0x140226CC8 (--1CPTPEngine@@UEAA@XZ.c)
 */

CPTPEngine *__fastcall CPTPEngine::`scalar deleting destructor'(CPTPEngine *Buffer, char a2)
{
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r9

  CPTPEngine::~CPTPEngine(Buffer);
  if ( (a2 & 1) != 0 )
    GreDeleteFastMutex((char *)Buffer, v4, v5, v6);
  return Buffer;
}
