/*
 * XREFs of NtDCompositionTelemetrySetApplicationId @ 0x14011DC40
 * Callers:
 *     <none>
 * Callees:
 *     ?ReferenceHandleAndLock@CApplicationChannel@DirectComposition@@SAJIPEAPEAV12@@Z @ 0x140056150 (-ReferenceHandleAndLock@CApplicationChannel@DirectComposition@@SAJIPEAPEAV12@@Z.c)
 *     ?TelemetrySetApplicationId@CApplicationChannel@DirectComposition@@QEAAJPEBG@Z @ 0x140068EB0 (-TelemetrySetApplicationId@CApplicationChannel@DirectComposition@@QEAAJPEBG@Z.c)
 *     RtlCopyFromUser @ 0x1401A4E78 (RtlCopyFromUser.c)
 *     __security_check_cookie @ 0x140242EA0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 *     memset @ 0x140243000 (memset.c)
 */

__int64 __fastcall NtDCompositionTelemetrySetApplicationId(int a1, size_t Size, void *Src)
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
