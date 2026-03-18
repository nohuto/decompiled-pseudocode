/*
 * XREFs of ?Initialize@DelayZoneTelemetry@@QEAAXKK@Z @ 0x1401BB638
 * Callers:
 *     ?Initialize@DelayZonePalmRejection@@AEAAXXZ @ 0x1400EBFFC (-Initialize@DelayZonePalmRejection@@AEAAXXZ.c)
 * Callees:
 *     memset @ 0x14024BD80 (memset.c)
 */

void __fastcall DelayZoneTelemetry::Initialize(DelayZoneTelemetry *this, int a2, int a3)
{
  unsigned __int64 v4; // rdx

  *(_DWORD *)this = a2;
  *((_DWORD *)this + 1) = a3;
  v4 = MEMORY[0xFFFFF78000000320] * MEMORY[0xFFFFF78000000004];
  *((_DWORD *)this + 2) = 0;
  *((_DWORD *)this + 3) = v4 >> 24;
  memset((char *)this + 2064, 0, 0x27F0uLL);
  memset((char *)this + 17, 0, 0x7FFuLL);
  *((_BYTE *)this + 16) = 0;
  *((_QWORD *)this + 1537) = (char *)this + 12288;
  *((_QWORD *)this + 1536) = (char *)this + 12288;
}
