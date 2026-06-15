/*
 * XREFs of ??0CSerialWorkQueue@@QEAA@XZ @ 0x1800D723C
 * Callers:
 *     ??0CAudioSrv@@QEAA@XZ @ 0x1800D6FE0 (--0CAudioSrv@@QEAA@XZ.c)
 *     ??0CPowerReferenceManager@@QEAA@XZ @ 0x1800D70A0 (--0CPowerReferenceManager@@QEAA@XZ.c)
 * Callees:
 *     ??0?$atomic@_N@std@@QEAA@_N@Z @ 0x1800D6FBC (--0-$atomic@_N@std@@QEAA@_N@Z.c)
 */

CSerialWorkQueue *__fastcall CSerialWorkQueue::CSerialWorkQueue(CSerialWorkQueue *this)
{
  __int64 v1; // r8
  CSerialWorkQueue *result; // rax
  __int64 v3; // r9

  *(_QWORD *)this = 0LL;
  std::atomic<bool>::atomic<bool>((_BYTE *)this + 80);
  *(_QWORD *)(v1 + 88) = 2LL;
  *(_OWORD *)(v1 + 112) = 0LL;
  result = (CSerialWorkQueue *)v1;
  *(_OWORD *)(v1 + 128) = 0LL;
  *(_OWORD *)(v1 + 144) = 0LL;
  *(_QWORD *)(v1 + 96) = v3;
  *(_QWORD *)(v1 + 104) = v3;
  *(_DWORD *)(v1 + 160) = -1;
  *(_DWORD *)(v1 + 164) = v3;
  *(_QWORD *)(v1 + 168) = v3;
  *(_DWORD *)(v1 + 8) = 3;
  *(_QWORD *)(v1 + 16) = v3;
  *(_QWORD *)(v1 + 24) = v3;
  *(_QWORD *)(v1 + 32) = v3;
  *(_QWORD *)(v1 + 40) = v3;
  *(_QWORD *)(v1 + 48) = v3;
  *(_QWORD *)(v1 + 56) = v3;
  *(_DWORD *)(v1 + 64) = v3;
  *(_DWORD *)(v1 + 68) = 1;
  *(_DWORD *)(v1 + 72) = 72;
  return result;
}
