/*
 * XREFs of ?SetupDCAttributes@@YAXPEAVDC@@PEAU_DC_ATTR@@@Z @ 0x14001B7B8
 * Callers:
 *     GreCreateDisplayDC @ 0x140041200 (GreCreateDisplayDC.c)
 *     ?GreSetDCOwnerExFastOpt@@YAHAEAUSESSION_GLOBALS@Base@Gre@@PEAUHOBJ__@@KHH@Z @ 0x1401C8C80 (-GreSetDCOwnerExFastOpt@@YAHAEAUSESSION_GLOBALS@Base@Gre@@PEAUHOBJ__@@KHH@Z.c)
 * Callees:
 *     HmgPentryFromPobj @ 0x14001AA80 (HmgPentryFromPobj.c)
 *     ?RestoreAttributes@DC@@QEAAXPEAU_DC_ATTR@@@Z @ 0x14001B8A0 (-RestoreAttributes@DC@@QEAAXPEAU_DC_ATTR@@@Z.c)
 */

void __fastcall SetupDCAttributes(struct DC *this, struct _DC_ATTR *a2)
{
  __int64 v4; // rbp
  __int64 v5; // rbx
  _QWORD *CurrentProcessWin32Process; // rax
  _QWORD *v7; // rdi
  __int64 v8; // rbx
  char v9; // cl

  v4 = HmgPentryFromPobj(this);
  DC::RestoreAttributes(this, a2);
  v5 = 0LL;
  if ( a2 )
  {
    CurrentProcessWin32Process = (_QWORD *)PsGetCurrentProcessWin32Process();
    v7 = CurrentProcessWin32Process;
    if ( !CurrentProcessWin32Process || !*CurrentProcessWin32Process )
      KeBugCheckEx(0x164u, 0x29uLL, 0LL, 0LL, 0LL);
    if ( PsGetProcessWow64Process(*CurrentProcessWin32Process) )
    {
      v5 = (unsigned int)__ROR4__((unsigned int)a2 ^ *((_DWORD *)v7 + 70), v7[35] & 0x1F);
    }
    else
    {
      if ( (*((_DWORD *)v7 + 69) & 0x20) != 0 )
      {
        v9 = *((_DWORD *)v7 + 70);
        v8 = *((unsigned int *)v7 + 70);
      }
      else
      {
        v8 = v7[35];
        v9 = v8;
      }
      v5 = __ROR8__((unsigned __int64)a2 ^ v8, v9 & 0x3F);
    }
  }
  *(_QWORD *)(v4 + 16) = v5;
}
