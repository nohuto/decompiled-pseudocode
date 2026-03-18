/*
 * XREFs of ??1VPTPContact@@QEAA@XZ @ 0x1402205E4
 * Callers:
 *     ??_GVPTPContact@@QEAAPEAXI@Z @ 0x1402207A8 (--_GVPTPContact@@QEAAPEAXI@Z.c)
 * Callees:
 *     SendMessageTo @ 0x14008B570 (SendMessageTo.c)
 */

void __fastcall VPTPContact::~VPTPContact(VPTPContact ***this)
{
  VPTPContact **v1; // rdx
  VPTPContact **v2; // rax
  int v3; // [rsp+30h] [rbp+8h] BYREF
  int v4; // [rsp+34h] [rbp+Ch]

  v1 = *this;
  if ( (*this)[1] != (VPTPContact *)this || (v2 = this[1], *v2 != (VPTPContact *)this) )
    __fastfail(3u);
  *v2 = (VPTPContact *)v1;
  v1[1] = (VPTPContact *)v2;
  if ( *this[4] == (VPTPContact *)this[4] )
  {
    v3 = *((_DWORD *)this + 7);
    v4 = 0;
    SendMessageTo(18, (int)&v3, 8);
  }
}
