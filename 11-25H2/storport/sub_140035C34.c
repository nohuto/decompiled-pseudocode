/*
 * XREFs of sub_140035C34 @ 0x140035C34
 * Callers:
 *     sub_140035B90 @ 0x140035B90 (sub_140035B90.c)
 *     sub_1401341B0 @ 0x1401341B0 (sub_1401341B0.c)
 * Callees:
 *     sub_140035D1C @ 0x140035D1C (sub_140035D1C.c)
 *     sub_140035D98 @ 0x140035D98 (sub_140035D98.c)
 *     sub_140035DC0 @ 0x140035DC0 (sub_140035DC0.c)
 *     sub_140035F08 @ 0x140035F08 (sub_140035F08.c)
 *     _guard_dispatch_icall @ 0x14013C5D0 (_guard_dispatch_icall.c)
 */

void __fastcall sub_140035C34(__int64 a1, void *a2, __int64 a3)
{
  IRP *v3; // rdi
  __int64 v5; // rdx
  __int64 v6; // rdx
  __int64 v7; // r8
  IRP *v8; // r10
  struct _MDL *MdlAddress; // rcx
  _DWORD v10[2]; // [rsp+20h] [rbp-18h] BYREF
  ULONG_PTR Information; // [rsp+28h] [rbp-10h]

  v3 = (IRP *)*((_QWORD *)a2 + 1);
  LOBYTE(a3) = *(_BYTE *)a2;
  v10[1] = 0;
  v5 = *((_QWORD *)a2 + 3);
  v10[0] = v3->IoStatus.Status;
  Information = v3->IoStatus.Information;
  if ( (unsigned __int8)sub_140035D98(a1, v5, a3) )
    sub_140035F08(v8);
  else
    sub_140035DC0(v8, v6, v7, v10);
  *(_DWORD *)(*((_QWORD *)a2 + 2) + 48LL) = v10[0];
  *(_QWORD *)(*((_QWORD *)a2 + 2) + 56LL) = Information;
  MdlAddress = v3->MdlAddress;
  if ( MdlAddress )
  {
    MmUnlockPages(MdlAddress);
    IoFreeMdl(v3->MdlAddress);
    v3->MdlAddress = 0LL;
  }
  IoFreeIrp(v3);
  sub_140035D1C(*((PVOID *)a2 + 3));
  (*((void (__fastcall **)(_QWORD, _QWORD))a2 + 4))(*((_QWORD *)a2 + 2), *((_QWORD *)a2 + 5));
  ExFreePoolWithTag(a2, 0x69506C50u);
}
