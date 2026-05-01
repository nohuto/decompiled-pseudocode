/*
 * XREFs of ??1?$unique_ptr@VJsonGameMruManager@@U?$default_delete@VJsonGameMruManager@@@std@@@std@@QEAA@XZ @ 0x180286D98
 * Callers:
 *     ??1BroadcastDVRComponent@@UEAA@XZ @ 0x180286BC4 (--1BroadcastDVRComponent@@UEAA@XZ.c)
 * Callees:
 *     ??R?$default_delete@VJsonGameMruManager@@@std@@QEBAXPEAVJsonGameMruManager@@@Z @ 0x1803109D8 (--R-$default_delete@VJsonGameMruManager@@@std@@QEBAXPEAVJsonGameMruManager@@@Z.c)
 */

__int64 __fastcall std::unique_ptr<JsonGameMruManager>::~unique_ptr<JsonGameMruManager>(_QWORD *a1)
{
  __int64 result; // rax

  if ( *a1 )
    return std::default_delete<JsonGameMruManager>::operator()();
  return result;
}
