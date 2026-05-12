/*
 * XREFs of RaidAdapterTargetedRescan @ 0x14006BF20
 * Callers:
 *     RaidAdapterRescanBus @ 0x140036EE4 (RaidAdapterRescanBus.c)
 * Callees:
 *     RaidBusEnumeratorVisitUnit @ 0x140009CE4 (RaidBusEnumeratorVisitUnit.c)
 *     RaidBusEnumeratorGetLunList @ 0x14000A2D0 (RaidBusEnumeratorGetLunList.c)
 *     McTemplateK0zqquuuqpp_EtwWriteTransfer @ 0x14005F504 (McTemplateK0zqquuuqpp_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 *     memset_0 @ 0x140138980 (memset_0.c)
 */

__int64 __fastcall RaidAdapterTargetedRescan(__int64 a1, __int64 a2, __int64 *a3, char a4)
{
  __int64 v4; // rbp
  _DWORD *v5; // r14
  unsigned int v6; // r15d
  unsigned int v7; // edi
  int *v8; // rbx
  ULONG v10; // r13d
  struct _RTL_BITMAP *v12; // rcx
  __int64 result; // rax
  int v14; // eax
  unsigned int v15; // ebx
  unsigned int v16; // ebp
  __int64 i; // rsi
  unsigned int v18; // [rsp+60h] [rbp-158h]
  _QWORD v20[32]; // [rsp+70h] [rbp-148h] BYREF

  v4 = *(_QWORD *)(a1 + 4904);
  v5 = (_DWORD *)(a1 + 4896);
  v6 = 0;
  v7 = 0;
  v8 = (int *)(a1 + 4892);
  v10 = *(unsigned __int8 *)(v4 + 8);
  LOBYTE(v18) = *(_BYTE *)(v4 + 8);
  if ( Microsoft_Windows_StorPortEnableBits < 0 )
    McTemplateK0zqquuuqpp_EtwWriteTransfer(
      a1,
      a2,
      (__int64)a3,
      *(const wchar_t **)(a1 + 48),
      *(_DWORD *)(a1 + 56),
      *v8,
      v10,
      *(_BYTE *)(v4 + 9),
      *(_BYTE *)(v4 + 10),
      *v5,
      *(_QWORD *)(a1 + 4912),
      *(_QWORD *)(a1 + 4920));
  if ( (*v8 & 4) != 0 )
  {
    v6 = *(unsigned __int8 *)(a1 + 481);
    if ( *(_QWORD *)(a1 + 4944) )
    {
      v12 = (struct _RTL_BITMAP *)(a1 + 4928);
      if ( (*v5 & 1) != 0 )
        RtlSetBit(v12, v10);
      else
        RtlClearBit(v12, v10);
    }
  }
  if ( a4 == 1 )
    return 0LL;
  v14 = *v8;
  if ( (*v8 & 2) != 0 )
  {
    v15 = *(unsigned __int8 *)(v4 + 9);
    v6 = v15 + 1;
  }
  else
  {
    v15 = 0;
    if ( (v14 & 1) != 0 )
    {
      *(_WORD *)((char *)&v18 + 1) = *(_WORD *)(v4 + 9);
      HIBYTE(v18) = 0;
      return RaidBusEnumeratorVisitUnit(a3, v18);
    }
  }
  v16 = *(unsigned __int8 *)(a1 + 530);
  memset_0(v20, 1, 0xFFuLL);
  while ( v15 < v6 )
  {
    BYTE1(v18) = v15;
    HIBYTE(v18) = 0;
    result = RaidBusEnumeratorGetLunList((__int64)a3, (unsigned __int16)v18, v20);
    v7 = result;
    if ( (int)result < 0 )
      return result;
    for ( i = 0LL; (unsigned int)i < v16; i = (unsigned int)(i + 1) )
    {
      if ( *((_BYTE *)v20 + i) )
      {
        BYTE2(v18) = i;
        result = RaidBusEnumeratorVisitUnit(a3, v18);
        v7 = result;
        if ( (int)result < 0 )
          return result;
      }
    }
    ++v15;
  }
  return v7;
}
