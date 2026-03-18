/*
 * XREFs of ??1VPTPContact@@QEAA@XZ @ 0x14021CC70
 * Callers:
 *     ??_GVPTPContact@@QEAAPEAXI@Z @ 0x14021CDDC (--_GVPTPContact@@QEAAPEAXI@Z.c)
 * Callees:
 *     SendMessageTo @ 0x1400675F0 (SendMessageTo.c)
 */

void __fastcall VPTPContact::~VPTPContact(VPTPContact ***this)
{
  VPTPContact **v1; // rdx
  VPTPContact **v2; // rax
  int v3; // eax
  int v4; // [rsp+30h] [rbp+8h] BYREF
  int v5; // [rsp+34h] [rbp+Ch]

  v1 = *this;
  if ( (*this)[1] != (VPTPContact *)this || (v2 = this[1], *v2 != (VPTPContact *)this) )
    __fastfail(3u);
  *v2 = (VPTPContact *)v1;
  v1[1] = (VPTPContact *)v2;
  if ( *this[4] == (VPTPContact *)this[4] )
  {
    v3 = *((_DWORD *)this + 7);
    v5 = 0;
    v4 = v3;
    SendMessageTo(18LL, &v4, 8LL);
  }
}
