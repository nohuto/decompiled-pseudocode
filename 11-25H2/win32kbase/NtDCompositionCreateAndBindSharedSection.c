/*
 * XREFs of NtDCompositionCreateAndBindSharedSection @ 0x14011E8A0
 * Callers:
 *     <none>
 * Callees:
 *     ?ReferenceHandleAndLock@CApplicationChannel@DirectComposition@@SAJIPEAPEAV12@@Z @ 0x140056150 (-ReferenceHandleAndLock@CApplicationChannel@DirectComposition@@SAJIPEAPEAV12@@Z.c)
 *     ?CreateAndBindSharedSection@CApplicationChannel@DirectComposition@@QEAAJI_KPEAPEAX@Z @ 0x140068F78 (-CreateAndBindSharedSection@CApplicationChannel@DirectComposition@@QEAAJI_KPEAPEAX@Z.c)
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 *     RtlWriteULong64ToUser @ 0x1402C90A8 (RtlWriteULong64ToUser.c)
 */

__int64 __fastcall NtDCompositionCreateAndBindSharedSection(int a1, int a2, unsigned __int64 a3, __int64 a4)
{
  HANDLE v7; // rbx
  int v8; // edi
  DirectComposition::CApplicationChannel *v9; // rbx
  HANDLE Handle; // [rsp+20h] [rbp-18h] BYREF
  DirectComposition::CApplicationChannel *v12; // [rsp+28h] [rbp-10h] BYREF

  v12 = 0LL;
  v7 = 0LL;
  Handle = 0LL;
  v8 = DirectComposition::CApplicationChannel::ReferenceHandleAndLock(a1, &v12);
  if ( v8 >= 0 )
  {
    v9 = v12;
    v8 = DirectComposition::CApplicationChannel::CreateAndBindSharedSection(v12, a2, a3, &Handle);
    (**(void (__fastcall ***)(DirectComposition::CApplicationChannel *))v9)(v9);
    v7 = Handle;
  }
  if ( v8 >= 0 )
    RtlWriteULong64ToUser(a4, v7);
  return (unsigned int)v8;
}
