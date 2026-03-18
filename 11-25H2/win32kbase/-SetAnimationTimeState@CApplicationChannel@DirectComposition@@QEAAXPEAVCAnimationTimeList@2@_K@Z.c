/*
 * XREFs of ?SetAnimationTimeState@CApplicationChannel@DirectComposition@@QEAAXPEAVCAnimationTimeList@2@_K@Z @ 0x140021238
 * Callers:
 *     ?Clear@CBatch@DirectComposition@@QEAAXXZ @ 0x140023FC4 (-Clear@CBatch@DirectComposition@@QEAAXXZ.c)
 * Callees:
 *     ?Release@CAnimationTimeList@DirectComposition@@QEAAKXZ @ 0x1400213B8 (-Release@CAnimationTimeList@DirectComposition@@QEAAKXZ.c)
 *     ?ReleaseResource@CApplicationChannel@DirectComposition@@QEAA_KPEAVCResourceMarshaler@2@@Z @ 0x140022208 (-ReleaseResource@CApplicationChannel@DirectComposition@@QEAA_KPEAVCResourceMarshaler@2@@Z.c)
 */

void __fastcall DirectComposition::CApplicationChannel::SetAnimationTimeState(
        DirectComposition::CApplicationChannel *this,
        struct DirectComposition::CAnimationTimeList *a2,
        unsigned __int64 a3)
{
  struct DirectComposition::CAnimationTimeList *v4; // rsi
  __int64 v6; // rbx
  struct DirectComposition::CAnimationTimeList *v7; // rbp
  char v8; // r11
  __int64 v9; // r8
  unsigned __int64 v10; // rdx
  __int64 v11; // r9
  unsigned __int64 v12; // rcx
  int v13; // r10d
  char v14; // al
  __int64 v15; // rax

  if ( a2 )
  {
    v4 = a2;
    do
    {
      v6 = *(_QWORD *)v4;
      v7 = (struct DirectComposition::CAnimationTimeList *)*((_QWORD *)v4 + 1);
      *((_QWORD *)v4 + 1) = 0LL;
      v8 = *(_BYTE *)(v6 + 200);
      v9 = *(_QWORD *)(v6 + 72);
      v10 = *(_QWORD *)(v6 + 112);
      v11 = *(_QWORD *)(v6 + 208);
      v12 = *(_QWORD *)(v6 + 216);
      v13 = *(_DWORD *)(v9 + 24);
      v14 = (v8 & 4) != 0;
      if ( (v13 & 4) != 0 )
      {
        if ( !v10 && !*(_QWORD *)(v6 + 144) )
          v10 = a3;
        v12 = v10;
      }
      if ( (v13 & 8) != 0 )
      {
        if ( a3 >= v10 )
        {
          if ( (*(_BYTE *)(v6 + 200) & 4) != 0 )
          {
            if ( !*(_BYTE *)(v9 + 28) )
              v12 = a3;
          }
          else if ( *(_BYTE *)(v9 + 28) )
          {
            v11 += a3 - v12;
          }
        }
        v14 = *(_BYTE *)(v9 + 28);
      }
      if ( (v13 & 0x10) != 0 )
      {
        v11 = *(_QWORD *)(v9 + 32);
        if ( a3 >= v10 )
          v12 = a3;
      }
      *(_QWORD *)(v6 + 112) = v10;
      *(_QWORD *)(v6 + 208) = v11;
      *(_QWORD *)(v6 + 216) = v12;
      *(_BYTE *)(v6 + 200) = v8 ^ (v8 ^ (4 * v14)) & 4;
      v15 = *(_QWORD *)(v6 + 80);
      if ( v9 == v15 )
      {
        *(_QWORD *)(v15 + 8) = 0LL;
        *(_QWORD *)(v15 + 16) = 0LL;
        *(_DWORD *)(v15 + 24) = 0;
        *(_QWORD *)(v15 + 32) = 0LL;
        *(_QWORD *)(v15 + 40) = 0LL;
        *(_BYTE *)(v15 + 28) = 0;
        *(_DWORD *)(v6 + 32) &= 0xFFFF3FFF;
      }
      else
      {
        *(_QWORD *)(v6 + 72) = *(_QWORD *)(v9 + 16);
        DirectComposition::CAnimationTimeList::Release((DirectComposition::CAnimationTimeList *)v9);
      }
      DirectComposition::CAnimationTimeList::Release(v4);
      DirectComposition::CApplicationChannel::ReleaseResource(
        this,
        (struct DirectComposition::CResourceMarshaler *)(v6 + 16));
      v4 = v7;
    }
    while ( v7 );
  }
}
