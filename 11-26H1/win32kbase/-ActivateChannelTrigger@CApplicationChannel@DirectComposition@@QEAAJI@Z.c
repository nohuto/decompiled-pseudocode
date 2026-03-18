/*
 * XREFs of ?ActivateChannelTrigger@CApplicationChannel@DirectComposition@@QEAAJI@Z @ 0x140135428
 * Callers:
 *     ?ForceRender@CConnection@DirectComposition@@QEAAJXZ @ 0x1401353AC (-ForceRender@CConnection@DirectComposition@@QEAAJXZ.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 __fastcall DirectComposition::CApplicationChannel::ActivateChannelTrigger(
        DirectComposition::CApplicationChannel *this,
        int a2)
{
  int v2; // edi
  int v4; // edx
  int v5; // edx
  int v6; // edx
  int v7; // eax
  int v8; // eax
  int v10; // eax
  int v11; // eax
  int v12; // eax
  int v13; // eax
  int v14; // eax

  v2 = 0;
  if ( !a2 )
  {
    v2 = (*(__int64 (__fastcall **)(DirectComposition::CApplicationChannel *))(*(_QWORD *)this + 64LL))(this);
    if ( v2 < 0 )
      return (unsigned int)v2;
    v10 = *((_DWORD *)this + 14);
    if ( (v10 & 8) != 0 )
      return (unsigned int)v2;
    v11 = v10 | 8;
    goto LABEL_14;
  }
  v4 = a2 - 1;
  if ( !v4 )
  {
    if ( (*(unsigned int (__fastcall **)(DirectComposition::CApplicationChannel *))(*(_QWORD *)this + 8LL))(this) != 2 )
      return (unsigned int)-1073741790;
    v14 = *((_DWORD *)this + 14);
    if ( (v14 & 0x10) != 0 )
      return (unsigned int)v2;
    v11 = v14 | 0x10;
LABEL_14:
    *((_DWORD *)this + 14) = v11;
    goto LABEL_9;
  }
  v5 = v4 - 1;
  if ( !v5 )
  {
    if ( (*(unsigned int (__fastcall **)(DirectComposition::CApplicationChannel *))(*(_QWORD *)this + 8LL))(this) == 2 )
    {
      v12 = *((_DWORD *)this + 14);
      if ( (v12 & 0x20) != 0 )
        return (unsigned int)v2;
      v11 = v12 | 0x20;
      goto LABEL_14;
    }
    return (unsigned int)-1073741790;
  }
  v6 = v5 - 1;
  if ( v6 )
  {
    if ( v6 != 1 )
      return (unsigned int)-1073741811;
    v2 = (*(__int64 (__fastcall **)(DirectComposition::CApplicationChannel *))(*(_QWORD *)this + 64LL))(this);
    if ( v2 >= 0 )
    {
      v13 = *((_DWORD *)this + 14);
      if ( (v13 & 0x80u) == 0 )
      {
        v8 = v13 | 0x80;
        goto LABEL_8;
      }
    }
  }
  else
  {
    v2 = (*(__int64 (__fastcall **)(DirectComposition::CApplicationChannel *))(*(_QWORD *)this + 64LL))(this);
    if ( v2 >= 0 )
    {
      v7 = *((_DWORD *)this + 14);
      if ( (v7 & 0x40) == 0 )
      {
        v8 = v7 | 0x40;
LABEL_8:
        *((_DWORD *)this + 14) = v8;
LABEL_9:
        *((_BYTE *)this + 264) |= 1u;
      }
    }
  }
  return (unsigned int)v2;
}
