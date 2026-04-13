/*
 * XREFs of ??0_lambda_163dbea914ec29e3eb0ae38e4a9291a3_@@QEAA@PEAVIdentityManager@ContentManagement@@AEBV?$MoveOnCopy@VHString@Wrappers@WRL@Microsoft@@@Internal@Windows@@@Z @ 0x18002813C
 * Callers:
 *     ?TryGetSecondaryMSATicketAsync@IdentityManager@ContentManagement@@UEAAJPEAUHSTRING__@@PEAPEAU?$IAsyncOperation@PEAUHSTRING__@@@Foundation@Windows@@@Z @ 0x18003C590 (-TryGetSecondaryMSATicketAsync@IdentityManager@ContentManagement@@UEAAJPEAUHSTRING__@@PEAPEAU-$I.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall _lambda_163dbea914ec29e3eb0ae38e4a9291a3_::_lambda_163dbea914ec29e3eb0ae38e4a9291a3_(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  __int64 result; // rax

  *(_QWORD *)a1 = a2;
  *(_QWORD *)(a1 + 8) = *(_QWORD *)a3;
  result = a1;
  *(_QWORD *)a3 = 0LL;
  *(_BYTE *)(a1 + 16) = 0;
  *(_BYTE *)(a3 + 8) = 1;
  return result;
}
