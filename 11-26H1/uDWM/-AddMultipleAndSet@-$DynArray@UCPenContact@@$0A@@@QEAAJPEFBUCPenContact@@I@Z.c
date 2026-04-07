/*
 * XREFs of ?AddMultipleAndSet@?$DynArray@UCPenContact@@$0A@@@QEAAJPEFBUCPenContact@@I@Z @ 0x18006998C
 * Callers:
 *     ?ProcessPenContact@CContactManager@@IEAAJIUtagPOINT@@PEBUtagRECT@@W4tagDIGITIZER_CONTACT_TYPE@@K_K@Z @ 0x180012EFC (-ProcessPenContact@CContactManager@@IEAAJIUtagPOINT@@PEBUtagRECT@@W4tagDIGITIZER_CONTACT_TYPE@@K.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18001BDA0 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18001E310 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall DynArray<CPenContact,0>::AddMultipleAndSet(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  unsigned int v4; // r8d
  unsigned int v5; // ebx
  __int64 v7; // rcx
  __int64 v8; // rax
  int v9; // eax

  v2 = *(unsigned int *)(a1 + 24);
  v4 = v2 + 1;
  if ( (int)v2 + 1 >= (unsigned int)v2 )
  {
    v5 = 0;
    if ( v4 > *(_DWORD *)(a1 + 20) )
    {
      v9 = DynArrayImpl<0>::AddMultipleAndSet(a1, 40, 1, a2);
      v5 = v9;
      if ( v9 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v9, 0xC2u, 0LL);
    }
    else
    {
      v7 = 5 * v2;
      v8 = *(_QWORD *)a1;
      *(_OWORD *)(v8 + 8 * v7) = *(_OWORD *)a2;
      *(_OWORD *)(v8 + 8 * v7 + 16) = *(_OWORD *)(a2 + 16);
      *(_QWORD *)(v8 + 8 * v7 + 32) = *(_QWORD *)(a2 + 32);
      *(_DWORD *)(a1 + 24) = v4;
    }
  }
  else
  {
    v5 = -2147024362;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024362, 0xB7u, 0LL);
  }
  return v5;
}
