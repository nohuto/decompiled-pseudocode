/*
 * XREFs of ?AddReceivedSection@SipcPort@@IEAAXPEAVSipcSection@@PEAUSipcPortEvent@@@Z @ 0x18011004C
 * Callers:
 *     ?GetPortEvent@AlpcPort@@UEAAJPEAUSipcPortEvent@@@Z @ 0x18006A1F0 (-GetPortEvent@AlpcPort@@UEAAJPEAUSipcPortEvent@@@Z.c)
 * Callees:
 *     ?DecreaseSectionEventCount@SipcPort@@AEAAXI@Z @ 0x1801115F8 (-DecreaseSectionEventCount@SipcPort@@AEAAXI@Z.c)
 *     ?DisconnectSection@SipcPort@@IEAAXPEAVSipcSection@@@Z @ 0x180111884 (-DisconnectSection@SipcPort@@IEAAXPEAVSipcSection@@@Z.c)
 *     ?FindSection@SipcPort@@IEAAPEAVSipcSection@@AEBVSipcSectionId@@@Z @ 0x1801118F0 (-FindSection@SipcPort@@IEAAPEAVSipcSection@@AEBVSipcSectionId@@@Z.c)
 *     ?PushFront@?$NtList@VSipcSection@@@@QEAAXPEAVSipcSection@@@Z @ 0x1801128E8 (-PushFront@-$NtList@VSipcSection@@@@QEAAXPEAVSipcSection@@@Z.c)
 */

void __fastcall SipcPort::AddReceivedSection(SipcPort *this, struct SipcSection *a2, struct SipcPortEvent *a3)
{
  struct SipcSection *Section; // rax
  unsigned int v7; // edx
  __int64 v8; // rdi
  struct SipcSection *v9; // rbx
  __int64 v10; // rax

  Section = SipcPort::FindSection(this, (struct SipcSection *)((char *)a2 + 56));
  v8 = 0LL;
  v9 = Section;
  if ( Section )
  {
    if ( *((_DWORD *)Section + 22) == 1 )
      SipcPort::DisconnectSection(this, Section);
    if ( *((_DWORD *)v9 + 22) == 2 )
    {
      *((_DWORD *)v9 + 22) = 4;
      SipcPort::DecreaseSectionEventCount(this, v7);
    }
    else
    {
      v9 = 0LL;
    }
  }
  NtList<SipcSection>::PushFront((char *)this + 8, a2);
  *(_DWORD *)a3 = 5;
  *((_DWORD *)a3 + 2) = (v9 != 0LL) + 1;
  *((_QWORD *)a3 + 2) = *((_QWORD *)a2 + 4);
  *((_QWORD *)a3 + 3) = *((_QWORD *)a2 + 6);
  if ( v9 )
    v10 = *((_QWORD *)v9 + 4);
  else
    v10 = 0LL;
  *((_QWORD *)a3 + 4) = v10;
  if ( v9 )
    v8 = *((_QWORD *)v9 + 6);
  *((_QWORD *)a3 + 5) = v8;
}
