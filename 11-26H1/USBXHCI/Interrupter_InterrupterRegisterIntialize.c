/*
 * XREFs of Interrupter_InterrupterRegisterIntialize @ 0x140007680
 * Callers:
 *     Interrupter_D0Entry @ 0x140006DDC (Interrupter_D0Entry.c)
 *     Controller_InternalReset @ 0x1400416D0 (Controller_InternalReset.c)
 * Callees:
 *     WPP_RECORDER_SF_qqdddi @ 0x140006F78 (WPP_RECORDER_SF_qqdddi.c)
 *     Interrupter_UpdateERDP @ 0x1400077D0 (Interrupter_UpdateERDP.c)
 *     XilRegister_WriteUlong64 @ 0x1400079C0 (XilRegister_WriteUlong64.c)
 *     XilRegister_WriteUlong @ 0x140008FA4 (XilRegister_WriteUlong.c)
 */

__int64 __fastcall Interrupter_InterrupterRegisterIntialize(__int64 a1)
{
  __int64 i; // rdi
  __int64 result; // rax
  __int64 v4; // rbx
  __int64 v5; // rbp
  _DWORD *v6; // rdx
  __int64 v7; // r8
  __int64 v8; // rcx
  __int64 v9; // r8
  _DWORD *v10; // rdx
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // rcx
  int v14; // eax
  signed __int32 v15[10]; // [rsp+0h] [rbp-68h] BYREF
  __int64 v16; // [rsp+28h] [rbp-40h]
  __int64 v17; // [rsp+30h] [rbp-38h]
  int v18; // [rsp+38h] [rbp-30h]
  int v19; // [rsp+40h] [rbp-28h]
  int v20; // [rsp+48h] [rbp-20h]
  __int64 v21; // [rsp+50h] [rbp-18h]

  for ( i = 0LL; (unsigned int)i < *(_DWORD *)(a1 + 92); i = (unsigned int)(i + 1) )
  {
    result = *(_QWORD *)(a1 + 32);
    v4 = *(_QWORD *)(result + 8 * i);
    if ( v4 )
    {
      v5 = *(_QWORD *)(*(_QWORD *)(v4 + 8) + 88LL);
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v11 = *(unsigned int *)(v4 + 140);
        v12 = *(_QWORD *)(v4 + 160);
        v13 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL);
        v21 = *(_QWORD *)(v12 + 24) + 16 * v11;
        v14 = *(_DWORD *)(v4 + 144);
        v20 = v11;
        v19 = v14;
        v18 = *(_DWORD *)(v4 + 136);
        v17 = v12;
        v16 = v4;
        WPP_RECORDER_SF_qqdddi(v13, v11, v12, 0x21u, v15[8]);
      }
      v6 = (_DWORD *)(*(_QWORD *)(v4 + 24) + 8LL);
      v7 = (unsigned __int16)*(_DWORD *)(v4 + 124);
      if ( *(_BYTE *)(v5 + 137) )
      {
        *v6 = v7;
        _InterlockedOr(v15, 0);
      }
      else
      {
        XilRegister_WriteUlong(v5, v6, v7);
      }
      LOBYTE(v6) = 1;
      Interrupter_UpdateERDP(v4, v6);
      v8 = *(_QWORD *)(v4 + 24);
      v9 = *(_QWORD *)(*(_QWORD *)(v4 + 168) + 24LL);
      v10 = (_DWORD *)(v8 + 16);
      if ( *(_BYTE *)(v5 + 137) )
      {
        result = *(_QWORD *)(*(_QWORD *)(v5 + 8) + 736LL);
        if ( (result & 1) != 0 )
        {
          *v10 = v9;
          _InterlockedOr(v15, 0);
          *(_DWORD *)(v8 + 20) = HIDWORD(v9);
        }
        else
        {
          *(_QWORD *)v10 = v9;
        }
        _InterlockedOr(v15, 0);
      }
      else
      {
        result = XilRegister_WriteUlong64(v5, v10, v9);
      }
    }
  }
  return result;
}
