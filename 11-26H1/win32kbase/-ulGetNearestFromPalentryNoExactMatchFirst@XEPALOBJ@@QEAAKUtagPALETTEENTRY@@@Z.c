/*
 * XREFs of ?ulGetNearestFromPalentryNoExactMatchFirst@XEPALOBJ@@QEAAKUtagPALETTEENTRY@@@Z @ 0x1400FC860
 * Callers:
 *     ?ulGetNearestFromPalentry@XEPALOBJ@@QEAAKUtagPALETTEENTRY@@K@Z @ 0x1400FC3AC (-ulGetNearestFromPalentry@XEPALOBJ@@QEAAKUtagPALETTEENTRY@@K@Z.c)
 *     ulGetNearestIndexFromColorref @ 0x1400FC3E0 (ulGetNearestIndexFromColorref.c)
 * Callees:
 *     ?ulGetMatchFromPalentry@XEPALOBJ@@QEAAKUtagPALETTEENTRY@@@Z @ 0x14003366C (-ulGetMatchFromPalentry@XEPALOBJ@@QEAAKUtagPALETTEENTRY@@@Z.c)
 */

__int64 __fastcall XEPALOBJ::ulGetNearestFromPalentryNoExactMatchFirst(ULONG_PTR *this, struct tagPALETTEENTRY a2)
{
  BYTE peRed; // bl
  unsigned __int8 *v4; // rdi
  __int64 SessionState; // rax
  unsigned __int8 *v6; // rdx
  __int64 v7; // rcx
  ULONG_PTR v8; // rax
  unsigned __int8 *v9; // r10
  unsigned int v10; // r9d
  unsigned __int8 *v11; // r11
  unsigned __int8 *v12; // r14
  unsigned int v13; // r8d

  peRed = a2.peRed;
  if ( !*(_DWORD *)(*this + 28) )
    return XEPALOBJ::ulGetMatchFromPalentry(this, a2);
  v4 = 0LL;
  SessionState = W32GetSessionState(this);
  v6 = (unsigned __int8 *)&unk_1402660D0;
  v7 = *(_QWORD *)(SessionState + 88);
  v8 = *this;
  if ( *this != *(_QWORD *)(v7 + 3872) )
    v6 = *(unsigned __int8 **)(v8 + 112);
  v9 = v6;
  v10 = 196608;
  v11 = &v6[4 * *(unsigned int *)(v8 + 28)];
  do
  {
    v12 = v4;
    v13 = *((unsigned __int16 *)&unk_140265CD0 + *v6 - (unsigned __int64)peRed + 255)
        + *((unsigned __int16 *)&unk_140265CD0 + v6[2] - (unsigned __int64)a2.peBlue + 255)
        + *((unsigned __int16 *)&unk_140265CD0 + v6[1] - (unsigned __int64)a2.peGreen + 255);
    if ( v13 < v10 )
    {
      v4 = v6;
      if ( !v13 )
        break;
    }
    v4 = v6;
    if ( v13 >= v10 )
      v4 = v12;
    v6 += 4;
    if ( v13 >= v10 )
      v13 = v10;
    v10 = v13;
  }
  while ( v6 < v11 );
  return (unsigned int)((v4 - v9) >> 2);
}
