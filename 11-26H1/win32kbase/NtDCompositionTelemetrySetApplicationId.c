/*
 * XREFs of NtDCompositionTelemetrySetApplicationId @ 0x1400B3B70
 * Callers:
 *     <none>
 * Callees:
 *     ?TelemetrySetApplicationId@CApplicationChannel@DirectComposition@@QEAAJPEBG@Z @ 0x1400B3C5C (-TelemetrySetApplicationId@CApplicationChannel@DirectComposition@@QEAAJPEBG@Z.c)
 *     ?ReferenceHandleAndLock@CApplicationChannel@DirectComposition@@SAJIPEAPEAV12@@Z @ 0x1400B4390 (-ReferenceHandleAndLock@CApplicationChannel@DirectComposition@@SAJIPEAPEAV12@@Z.c)
 *     RtlCopyFromUser @ 0x1401C9358 (RtlCopyFromUser.c)
 *     __security_check_cookie @ 0x14024BC30 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 *     memset @ 0x14024BD80 (memset.c)
 */

__int64 __fastcall NtDCompositionTelemetrySetApplicationId(unsigned int a1, size_t Size, void *Src)
{
  int v6; // ebx
  struct DirectComposition::CApplicationChannel *v7; // rdi
  struct DirectComposition::CApplicationChannel *v9; // [rsp+28h] [rbp-170h] BYREF
  unsigned __int16 v10[152]; // [rsp+30h] [rbp-168h] BYREF

  v6 = 0;
  v9 = 0LL;
  memset(v10, 0, 0x12EuLL);
  if ( !Src || !Size || (Size & 1) != 0 || Size > 0x12C )
    v6 = -1073741811;
  if ( v6 >= 0 )
  {
    RtlCopyFromUser(v10, Src, Size);
    v6 = DirectComposition::CApplicationChannel::ReferenceHandleAndLock(a1, &v9);
    v7 = v9;
    if ( v6 >= 0 )
    {
      v6 = DirectComposition::CApplicationChannel::TelemetrySetApplicationId(v9, v10);
      (**(void (__fastcall ***)(struct DirectComposition::CApplicationChannel *))v7)(v7);
    }
  }
  return (unsigned int)v6;
}
