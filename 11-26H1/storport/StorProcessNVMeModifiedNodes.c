/*
 * XREFs of StorProcessNVMeModifiedNodes @ 0x1400C74E0
 * Callers:
 *     StorAdapterNVMeEnumerateZNS @ 0x1401B5E24 (StorAdapterNVMeEnumerateZNS.c)
 * Callees:
 *     McTemplateK0zqjqq_EtwWriteTransfer @ 0x14006FE80 (McTemplateK0zqjqq_EtwWriteTransfer.c)
 *     RaidUnitNotifyHardwareGone @ 0x1400A8A48 (RaidUnitNotifyHardwareGone.c)
 *     StorProcessNVMeNewUnit @ 0x140191C34 (StorProcessNVMeNewUnit.c)
 */

bool __fastcall StorProcessNVMeModifiedNodes(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rdi
  _QWORD *v4; // r15
  _QWORD *v5; // rbx
  int v6; // esi
  int v7; // ebp
  bool v8; // r14

  v3 = *(_QWORD *)a1;
  v4 = (_QWORD *)(a1 + 120);
  v5 = *(_QWORD **)(a1 + 120);
  v6 = 0;
  v7 = 0;
  v8 = 0;
  while ( v5 != v4 )
  {
    a2 = (__int64)(v5 - 2);
    a1 = *((unsigned int *)v5 + 18);
    if ( (_DWORD)a1 )
    {
      if ( (_DWORD)a1 == 1 )
      {
        StorProcessNVMeNewUnit();
        ++v6;
        v8 = 1;
      }
    }
    else
    {
      v8 = RaidUnitNotifyHardwareGone(*(_QWORD *)(a2 + 8));
      ++v7;
    }
    v5 = (_QWORD *)*v5;
  }
  if ( *(_BYTE *)(v3 + 4434) && (v6 || v7) && (byte_140173446 & 1) != 0 )
    McTemplateK0zqjqq_EtwWriteTransfer(
      a1,
      a2,
      a3,
      *(const wchar_t **)(v3 + 4784),
      *(_DWORD *)(v3 + 56),
      v3 + 5128,
      v6,
      v7);
  return v8;
}
