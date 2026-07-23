/*
 * XREFs of CarLoadImageHandler @ 0x14064CDCC
 * Callers:
 *     VfSuspectDriversLoadCallback @ 0x140C3EA60 (VfSuspectDriversLoadCallback.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140212F10 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgCreate1Sz_wchar_t @ 0x1404269F0 (_tlgCreate1Sz_wchar_t.c)
 *     _tlgKeywordOn @ 0x140447980 (_tlgKeywordOn.c)
 *     CarCopyDriverName @ 0x14064C408 (CarCopyDriverName.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 */

void __fastcall CarLoadImageHandler(__int64 a1)
{
  __int64 Pool2; // rax
  __int64 v3; // rbx
  int v4; // [rsp+38h] [rbp-49h] BYREF
  __int64 v5; // [rsp+40h] [rbp-41h] BYREF
  __int64 v6; // [rsp+48h] [rbp-39h] BYREF
  __int64 v7; // [rsp+50h] [rbp-31h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v8; // [rsp+58h] [rbp-29h] BYREF
  int *v9; // [rsp+78h] [rbp-9h]
  __int64 v10; // [rsp+80h] [rbp-1h]
  _BYTE v11[16]; // [rsp+88h] [rbp+7h] BYREF
  __int64 *v12; // [rsp+98h] [rbp+17h]
  __int64 v13; // [rsp+A0h] [rbp+1Fh]
  __int64 *v14; // [rsp+A8h] [rbp+27h]
  __int64 v15; // [rsp+B0h] [rbp+2Fh]
  __int64 *v16; // [rsp+B8h] [rbp+37h]
  __int64 v17; // [rsp+C0h] [rbp+3Fh]

  Pool2 = ExAllocatePool2(0x40uLL);
  v3 = Pool2;
  if ( Pool2 )
  {
    *(_QWORD *)Pool2 = CarDriverInfo;
    *(_QWORD *)(Pool2 + 72) = *(_QWORD *)(a1 + 48);
    *(_DWORD *)(Pool2 + 80) = *(_DWORD *)(a1 + 64);
    *(_DWORD *)(Pool2 + 84) = *(_DWORD *)(a1 + 156);
    *(_DWORD *)(Pool2 + 88) = *(_DWORD *)(a1 + 120);
    CarCopyDriverName((_WORD *)(Pool2 + 8), (unsigned __int16 *)(a1 + 88));
    CarDriverInfo = v3;
    if ( CarLogInitialized )
    {
      if ( (VfRuleClasses & 0x400000) != 0
        && (unsigned int)dword_140E08E50 > 5
        && tlgKeywordOn((__int64)&dword_140E08E50, 0x800000000000LL) )
      {
        v4 = CarTipTag;
        v10 = 4LL;
        v9 = &v4;
        tlgCreate1Sz_wchar_t((__int64)v11, (const WCHAR *)(v3 + 8));
        v12 = &v5;
        v6 = *(unsigned int *)(v3 + 84);
        v5 = CarEtwRandomSeed;
        v14 = &v6;
        v7 = *(unsigned int *)(v3 + 88);
        v16 = &v7;
        v13 = 8LL;
        v15 = 8LL;
        v17 = 8LL;
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_140E08E50,
          (unsigned __int8 *)byte_140053B81,
          0LL,
          0LL,
          7u,
          &v8);
      }
    }
  }
}
