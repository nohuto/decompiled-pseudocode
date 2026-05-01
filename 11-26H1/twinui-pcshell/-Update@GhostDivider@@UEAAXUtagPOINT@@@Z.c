/*
 * XREFs of ?Update@GhostDivider@@UEAAXUtagPOINT@@@Z @ 0x18053C570
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall GhostDivider::Update(GhostDivider *this, struct tagPOINT a2)
{
  if ( *((_BYTE *)this + 93) )
    *((_DWORD *)this + 19) = a2.x - *((_DWORD *)this + 21) / 2;
  else
    *((_DWORD *)this + 20) = a2.y - *((_DWORD *)this + 22) / 2;
  SetWindowPos(*((HWND *)this + 3), 0LL, *((_DWORD *)this + 19), *((_DWORD *)this + 20), 0, 0, 0x5Du);
}
