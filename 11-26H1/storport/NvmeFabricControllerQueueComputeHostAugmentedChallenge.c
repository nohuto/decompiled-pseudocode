/*
 * XREFs of NvmeFabricControllerQueueComputeHostAugmentedChallenge @ 0x1400FC5F4
 * Callers:
 *     NvmeFabricControllerQueueProcessCtrlResponse @ 0x1400FD3F0 (NvmeFabricControllerQueueProcessCtrlResponse.c)
 * Callees:
 *     StorEtwNvmeControllerEvent @ 0x140043CC4 (StorEtwNvmeControllerEvent.c)
 *     ComputeHash @ 0x14008DCA4 (ComputeHash.c)
 *     DhGetKeyLength @ 0x1400E31B4 (DhGetKeyLength.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 *     memset_0 @ 0x140138980 (memset_0.c)
 */

__int64 __fastcall NvmeFabricControllerQueueComputeHostAugmentedChallenge(__int64 a1, unsigned __int16 a2, UCHAR *a3)
{
  ULONG v4; // esi
  __int64 v6; // rdx
  int v7; // ebx
  const WCHAR *v8; // rdi
  unsigned __int16 KeyLength; // ax
  PUCHAR v10; // r8
  UCHAR v12[4]; // [rsp+A0h] [rbp-148h] BYREF
  UCHAR v13[4]; // [rsp+A4h] [rbp-144h] BYREF
  UCHAR v14[256]; // [rsp+B0h] [rbp-138h] BYREF

  v4 = a2;
  memset_0(v14, 0, sizeof(v14));
  v6 = *(_QWORD *)(a1 + 96);
  *(_DWORD *)v12 = 0;
  *(_DWORD *)v13 = 0;
  switch ( *(_BYTE *)(v6 + 3) )
  {
    case 1:
      v8 = L"SHA256";
      break;
    case 2:
      v8 = L"SHA384";
      break;
    case 3:
      v8 = L"SHA512";
      break;
    default:
      v7 = -1073741811;
LABEL_13:
      StorEtwNvmeControllerEvent(
        *(_QWORD *)(a1 + 88),
        1,
        2LL,
        (__int64)L"Computing host augmented challenge failed",
        L"Status",
        v7,
        L"DHgID",
        *(_BYTE *)(*(_QWORD *)(a1 + 96) + 4LL),
        L"HashID",
        *(_BYTE *)(*(_QWORD *)(a1 + 96) + 3LL),
        (void *)&word_140152E7C,
        0,
        (void *)&word_140152E7C,
        0,
        (void *)&word_140152E7C,
        0,
        (void *)&word_140152E7C,
        0,
        (void *)&word_140152E7C,
        0);
      return (unsigned int)v7;
  }
  KeyLength = DhGetKeyLength(*(unsigned __int8 *)(v6 + 4));
  v7 = ComputeHash(v8, KeyLength, v10, 0, 0LL, (ULONG *)v12, v14);
  if ( v7 < 0 )
    goto LABEL_13;
  if ( *(_DWORD *)v12 != v4 )
    goto LABEL_12;
  v7 = ComputeHash(v8, v4, (PUCHAR)(*(_QWORD *)(a1 + 96) + 1320LL), *(ULONG *)v12, (__int64)v14, (ULONG *)v13, a3);
  if ( v7 < 0 )
    goto LABEL_13;
  if ( *(_DWORD *)v13 != v4 )
  {
LABEL_12:
    v7 = -1073741820;
    goto LABEL_13;
  }
  return (unsigned int)v7;
}
