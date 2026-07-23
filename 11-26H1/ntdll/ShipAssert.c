/*
 * XREFs of ShipAssert @ 0x1800D2E30
 * Callers:
 *     ShipAssertMsgA @ 0x18013AC50 (ShipAssertMsgA.c)
 * Callees:
 *     GetShipAssertBuffer @ 0x1800D301C (GetShipAssertBuffer.c)
 *     WerEscalationLazyInit @ 0x1800D3120 (WerEscalationLazyInit.c)
 *     __security_check_cookie @ 0x180162B90 (__security_check_cookie.c)
 */

__int64 __fastcall ShipAssert(int a1, int a2)
{
  struct _TEB *v4; // rax
  unsigned int *p_LastErrorValue; // r14
  unsigned int LastErrorValue; // r15d
  $660E77B8BF3F239769F146CE1EC8CE2C *v7; // rsi
  __int64 result; // rax
  __int64 ShipAssertBuffer; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  unsigned int v14; // ebx
  int v15; // r8d
  int v16; // eax
  int v17; // eax
  int v18; // eax
  int v19; // eax
  __int64 v20; // rdx
  __int64 v21; // [rsp+20h] [rbp-108h]
  _DWORD v22[4]; // [rsp+28h] [rbp-100h]
  unsigned int *v23; // [rsp+38h] [rbp-F0h]
  $660E77B8BF3F239769F146CE1EC8CE2C *v24; // [rsp+40h] [rbp-E8h]
  int v25; // [rsp+50h] [rbp-D8h]
  int v26; // [rsp+54h] [rbp-D4h]
  _DWORD v27[42]; // [rsp+58h] [rbp-D0h]

  v4 = NtCurrentTeb();
  p_LastErrorValue = &v4->LastErrorValue;
  v23 = &v4->LastErrorValue;
  LastErrorValue = v4->LastErrorValue;
  HIDWORD(v21) = LastErrorValue;
  v7 = &v4->6126;
  v24 = &v4->6126;
  result = v4->SameTebFlags;
  if ( (result & 0x10) == 0 )
  {
    v7->SameTebFlags = result | 0x10;
    ShipAssertBuffer = GetShipAssertBuffer();
    v14 = 0;
    if ( ShipAssertBuffer && ShipAssertBuffer != 255 && ShipAssertBuffer != 238 )
    {
      v11 = ((unsigned __int16)_InterlockedExchangeAdd(&dword_1801C4F70, 1u) + 1) & 0x3FF;
      *(_DWORD *)(ShipAssertBuffer + 8LL * (unsigned int)v11) = a1;
      *(_DWORD *)(ShipAssertBuffer + 8LL * (unsigned int)v11 + 4) = a2;
    }
    v22[0] = a1;
    v22[1] = a2;
    v22[2] = 0;
    LODWORD(v21) = 0;
    if ( (int)WerEscalationLazyInit(v11, v10, v12, v13, v21) >= 0 && !g_disableEscalation )
    {
      v15 = *(_DWORD *)(g_werEscalationData + 560);
      v16 = *(_DWORD *)(g_werEscalationData + 520);
      v25 = 16;
      v27[0] = v16;
      v26 = 1;
      v17 = *(_DWORD *)(g_werEscalationData + 524);
      v27[2] = 16;
      v27[4] = v17;
      v27[3] = 1;
      v18 = *(_DWORD *)(g_werEscalationData + 528);
      v27[6] = 16;
      v27[8] = v18;
      v27[7] = 1;
      v19 = *(_DWORD *)(g_werEscalationData + 532);
      v27[10] = 16;
      v27[12] = v19;
      v27[11] = 1;
      while ( v14 < 3 )
      {
        v20 = 2LL * (v14 + 4);
        *(&v25 + 2 * v20) = 16;
        v27[2 * v20] = v22[v14];
        v27[2 * v20 - 1] = 1;
        ++v14;
      }
      v27[22] = 16;
      v27[24] = v15;
      v27[23] = 1;
    }
    result = 65519LL;
    v7->SameTebFlags &= ~0x10u;
    *p_LastErrorValue = LastErrorValue;
  }
  return result;
}
