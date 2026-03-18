/*
 * XREFs of UsbhEtwGetHubInfo @ 0x140029BC0
 * Callers:
 *     UsbhEtwLogHubInformation @ 0x140028050 (UsbhEtwLogHubInformation.c)
 *     UsbhEtwLogHubPowerEvent @ 0x140028B5C (UsbhEtwLogHubPowerEvent.c)
 *     UsbhEtwLogHubPastExceptions @ 0x140029294 (UsbhEtwLogHubPastExceptions.c)
 *     UsbhSshResumeUpstream @ 0x140029894 (UsbhSshResumeUpstream.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall UsbhEtwGetHubInfo(__int64 a1, __int64 a2)
{
  int v2; // r8d
  __int16 v3; // ax
  int v4; // eax
  int v5; // eax
  int v6; // eax
  int v7; // eax
  int v8; // eax
  __int64 result; // rax

  v2 = 0;
  *(_WORD *)a2 = *(_WORD *)(a1 + 2548);
  v3 = *(_WORD *)(a1 + 2550);
  *(_DWORD *)(a2 + 4) = 0;
  *(_WORD *)(a2 + 2) = v3;
  *(_DWORD *)(a2 + 8) = *(unsigned __int16 *)(a1 + 5208);
  if ( *(_WORD *)(a1 + 5208) )
  {
    v2 = 1;
    *(_DWORD *)(a2 + 4) = 1;
  }
  v4 = *(unsigned __int16 *)(a1 + 5210);
  *(_DWORD *)(a2 + 12) = v4;
  if ( v4 )
    *(_DWORD *)(a2 + 4) = ++v2;
  v5 = *(unsigned __int16 *)(a1 + 5212);
  *(_DWORD *)(a2 + 16) = v5;
  if ( v5 )
    *(_DWORD *)(a2 + 4) = ++v2;
  v6 = *(unsigned __int16 *)(a1 + 5214);
  *(_DWORD *)(a2 + 20) = v6;
  if ( v6 )
    *(_DWORD *)(a2 + 4) = ++v2;
  v7 = *(unsigned __int16 *)(a1 + 5216);
  *(_DWORD *)(a2 + 24) = v7;
  if ( v7 )
    *(_DWORD *)(a2 + 4) = ++v2;
  v8 = *(unsigned __int16 *)(a1 + 5218);
  *(_DWORD *)(a2 + 28) = v8;
  if ( v8 )
    *(_DWORD *)(a2 + 4) = v2 + 1;
  result = *(unsigned int *)(a1 + 2536);
  *(_DWORD *)(a2 + 32) = result;
  return result;
}
