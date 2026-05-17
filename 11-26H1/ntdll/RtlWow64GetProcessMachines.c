/*
 * XREFs of RtlWow64GetProcessMachines @ 0x180034FB0
 * Callers:
 *     LdrpGetModuleName @ 0x180033E20 (LdrpGetModuleName.c)
 *     DbgUiIssueRemoteBreakin @ 0x1801392F0 (DbgUiIssueRemoteBreakin.c)
 * Callees:
 *     NtQuerySystemInformationEx @ 0x180161D10 (NtQuerySystemInformationEx.c)
 *     __security_check_cookie @ 0x180162C90 (__security_check_cookie.c)
 *     _alloca_probe @ 0x180163610 (_alloca_probe.c)
 */

__int64 __fastcall RtlWow64GetProcessMachines(__int64 a1, _WORD *a2, __int16 *a3)
{
  __int64 v3; // rbx
  int v6; // r9d
  __int16 v7; // cx
  __int16 i; // dx
  __int64 result; // rax
  unsigned int *v10; // r14
  unsigned __int64 v11; // rcx
  unsigned __int64 v12; // rcx
  void *v13; // rsp
  void *v14; // rsp
  unsigned int v15; // r8d
  __int16 v16; // r10
  __int16 v17; // r11
  struct _TEB *v18; // rcx
  __int64 WowTebOffset; // rax
  _WORD *v20; // rax
  unsigned int v21; // [rsp+30h] [rbp+0h] BYREF
  __int64 v22; // [rsp+38h] [rbp+8h] BYREF
  _BYTE v23[24]; // [rsp+40h] [rbp+10h] BYREF

  LODWORD(v3) = 0;
  v22 = a1;
  v6 = 0;
  if ( a1 == -1 )
  {
    if ( !NtCurrentTeb()->WowTebOffset )
    {
      v7 = 0;
      i = -31132;
      goto LABEL_4;
    }
    v18 = NtCurrentTeb();
    WowTebOffset = v18->WowTebOffset;
    if ( (int)WowTebOffset < 0 )
      v18 = (struct _TEB *)((char *)v18 + WowTebOffset);
    if ( (_DWORD)v18 == LODWORD(v18->NtTib.SubSystemTib) )
      v20 = (_WORD *)LODWORD(v18->glDispatchTable[137]);
    else
      v20 = v18->TlsSlots[10];
    if ( v20 )
    {
      v7 = v20[17];
      if ( v7 )
      {
        i = v20[16];
        if ( i )
          goto LABEL_4;
      }
    }
  }
  v21 = 20;
  v10 = (unsigned int *)v23;
  v6 = ((__int64 (__fastcall *)(__int64, __int64 *, __int64, _BYTE *, int, unsigned int *))NtQuerySystemInformationEx)(
         230LL,
         &v22,
         8LL,
         v23,
         20,
         &v21);
  if ( v6 == -1073741789 )
  {
    v11 = v21 + 15LL;
    if ( v11 <= v21 )
      v11 = 0xFFFFFFFFFFFFFF0LL;
    v12 = v11 & 0xFFFFFFFFFFFFFFF0uLL;
    v13 = alloca(v12);
    v14 = alloca(v12);
    v10 = &v21;
    v6 = ((__int64 (__fastcall *)(__int64, __int64 *, __int64, unsigned int *, unsigned int, unsigned int *))NtQuerySystemInformationEx)(
           230LL,
           &v22,
           8LL,
           &v21,
           v21,
           &v21);
  }
  if ( v6 < 0 )
    return (unsigned int)v6;
  v15 = *v10;
  v7 = 0;
  for ( i = 0; (_WORD)v15; i = v17 )
  {
    v3 = (unsigned int)(v3 + 1);
    v16 = v15;
    if ( (v15 & 0x1C0000) != 0x180000 )
      v16 = v7;
    v7 = v16;
    if ( (v15 & 0x40000) == 0 )
      LOWORD(v15) = i;
    v17 = v15;
    v15 = v10[v3];
  }
LABEL_4:
  *a2 = v7;
  result = (unsigned int)v6;
  if ( a3 )
    *a3 = i;
  return result;
}
