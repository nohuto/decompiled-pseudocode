/*
 * XREFs of KiAltContextProcessMcheckAltReturn @ 0x1405FF580
 * Callers:
 *     <none>
 * Callees:
 *     WheaAttemptPhysicalPageOffline @ 0x14084E3B0 (WheaAttemptPhysicalPageOffline.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

void __fastcall KiAltContextProcessMcheckAltReturn(__int64 a1, __int64 a2)
{
  __int64 v2; // r8
  int v4; // edi
  char v5; // bp
  unsigned int v6; // edx
  unsigned int *v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rdi
  __int64 Pool2; // rax
  int v11; // r8d
  int v12; // r9d
  void *v13; // rsi

  v2 = *(_QWORD *)(a2 + 32);
  v4 = -1073741823;
  v5 = *(_BYTE *)(a2 + 24) & 0x10;
  v6 = 0;
  v7 = (unsigned int *)(v2 + 128);
  while ( v6 < *(unsigned __int16 *)(v2 + 10) )
  {
    v8 = *((_QWORD *)v7 + 2) - *(_QWORD *)&XPF_MCA_SECTION_GUID.Data1;
    if ( !v8 )
      v8 = *((_QWORD *)v7 + 3) - *(_QWORD *)XPF_MCA_SECTION_GUID.Data4;
    if ( !v8 )
    {
      v9 = v2 + *v7;
      Pool2 = ExAllocatePool2(0x100uLL);
      v13 = (void *)Pool2;
      if ( Pool2 )
      {
        LOBYTE(v12) = v5;
        LOBYTE(v11) = 1;
        v4 = WheaAttemptPhysicalPageOffline(*(_QWORD *)(v9 + 48) >> 12, 0, v11, v12, Pool2);
        ExFreePoolWithTag(v13, 0x61656857u);
      }
      else
      {
        v4 = -1073741670;
      }
      break;
    }
    v7 += 18;
    ++v6;
  }
  *(_DWORD *)(a2 + 40) = v4;
  _InterlockedDecrement((volatile signed __int32 *)(a2 + 16));
}
