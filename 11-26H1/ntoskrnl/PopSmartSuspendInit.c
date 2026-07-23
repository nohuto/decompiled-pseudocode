/*
 * XREFs of PopSmartSuspendInit @ 0x140CDB184
 * Callers:
 *     PoInitSystem @ 0x140CD49D0 (PoInitSystem.c)
 * Callees:
 *     PopSmartSuspendResetData @ 0x14077A74C (PopSmartSuspendResetData.c)
 */

__int64 PopSmartSuspendInit()
{
  __int64 v0; // rdi
  _QWORD *v1; // rbx
  __int64 result; // rax

  v0 = 16LL;
  v1 = &unk_140F0CA60;
  do
  {
    result = PopSmartSuspendResetData(v1);
    v1 += 13;
    --v0;
  }
  while ( v0 );
  *(_QWORD *)&PopPdcDeviceListLock.Spare36 = &unk_140F0CA60;
  dword_140F0CA48 = 0;
  return result;
}
