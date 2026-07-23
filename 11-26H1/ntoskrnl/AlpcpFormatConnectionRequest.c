/*
 * XREFs of AlpcpFormatConnectionRequest @ 0x1408EE1CC
 * Callers:
 *     NtSecureConnectPort @ 0x1408EC280 (NtSecureConnectPort.c)
 *     AlpcpProcessConnectionRequest @ 0x1408EDC14 (AlpcpProcessConnectionRequest.c)
 * Callees:
 *     AlpcpMapLegacyPortView @ 0x1408EB9BC (AlpcpMapLegacyPortView.c)
 *     AlpcpValidateConnectionMessage @ 0x1408EDB40 (AlpcpValidateConnectionMessage.c)
 *     AlpcpSetupMessageDataForDeferredCopy @ 0x1408EE3C0 (AlpcpSetupMessageDataForDeferredCopy.c)
 *     AlpcpAllocateMessage @ 0x14098DB40 (AlpcpAllocateMessage.c)
 *     AlpcpCaptureAttributes @ 0x14098F668 (AlpcpCaptureAttributes.c)
 *     AlpcpReferenceBlob @ 0x14098FE98 (AlpcpReferenceBlob.c)
 *     AlpcpUnlockMessage @ 0x140991780 (AlpcpUnlockMessage.c)
 */

__int64 __fastcall AlpcpFormatConnectionRequest(
        ULONG_PTR *a1,
        int a2,
        __int64 a3,
        __int64 a4,
        unsigned __int16 *a5,
        int a6,
        __int64 a7,
        ULONG_PTR *a8,
        char a9,
        char a10)
{
  char v10; // si
  __int64 v11; // rbp
  unsigned __int16 *v12; // r14
  int v13; // r12d
  __int64 result; // rax
  int v17; // edi
  ULONG_PTR v18; // rbx
  unsigned __int16 v19; // ax
  __int16 v20; // cx
  int v21; // r9d
  ULONG_PTR v22; // rcx
  ULONG_PTR BugCheckParameter2; // [rsp+80h] [rbp+18h] BYREF

  v10 = a9;
  LOWORD(v11) = 0;
  v12 = a5;
  v13 = a4;
  BugCheckParameter2 = 0LL;
  if ( !a4 || (result = AlpcpValidateConnectionMessage(**(_QWORD **)(a3 + 16), a5, a9), (int)result >= 0) )
  {
    result = AlpcpAllocateMessage(&BugCheckParameter2, 0LL, 0LL);
    v17 = result;
    if ( (int)result >= 0 )
    {
      v18 = BugCheckParameter2;
      if ( v10 )
      {
        v11 = a7;
        if ( !a7 )
        {
          *(_QWORD *)(BugCheckParameter2 + 272) = 0LL;
LABEL_6:
          *(_OWORD *)(v18 + 248) = *(_OWORD *)&KeGetCurrentThread()[1].CycleTime;
          v19 = *v12;
          *(_WORD *)(v18 + 240) = *v12;
          *(_WORD *)(v18 + 242) = v19 + 40;
          v20 = *(_WORD *)(v18 + 244) & 0xFF00 | 0xA;
          *(_WORD *)(v18 + 244) = v20;
          if ( KeGetCurrentThread()->PreviousMode == (_BYTE)v11 )
            *(_WORD *)(v18 + 244) = v20 | v12[2] & 0x8000;
          v21 = *v12;
          if ( (_WORD)v11 == (_WORD)v21
            || (v17 = AlpcpSetupMessageDataForDeferredCopy(v18, v13, a2, v21, v10, a10), v17 >= 0) )
          {
            if ( v10 )
            {
              v22 = *(_QWORD *)(v18 + 144);
              if ( v22 )
              {
                *a8 = v22;
                AlpcpReferenceBlob(v22);
              }
            }
            *a1 = v18;
            return (unsigned int)v17;
          }
LABEL_14:
          AlpcpUnlockMessage(v18);
          return (unsigned int)v17;
        }
        v17 = AlpcpMapLegacyPortView(a3, a7, BugCheckParameter2 + 104);
        *(_QWORD *)(v18 + 272) = *(_QWORD *)(v11 + 24);
        LOWORD(v11) = 0;
      }
      else
      {
        v17 = AlpcpCaptureAttributes(a3, a2, a6, BugCheckParameter2, (void *)(BugCheckParameter2 + 104));
      }
      if ( v17 < 0 )
        goto LABEL_14;
      goto LABEL_6;
    }
  }
  return result;
}
