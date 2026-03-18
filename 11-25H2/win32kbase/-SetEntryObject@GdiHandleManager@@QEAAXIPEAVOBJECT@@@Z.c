/*
 * XREFs of ?SetEntryObject@GdiHandleManager@@QEAAXIPEAVOBJECT@@@Z @ 0x14006FCF8
 * Callers:
 *     HmgSwapLockedHandleContents @ 0x14006E700 (HmgSwapLockedHandleContents.c)
 *     ?hSetupFast@ENTRYOBJ@@SAPEAUHOBJ__@@AEAUSESSION_GLOBALS@Base@Gre@@PEAVOBJECT@@EGI@Z @ 0x1401C52E4 (-hSetupFast@ENTRYOBJ@@SAPEAUHOBJ__@@AEAUSESSION_GLOBALS@Base@Gre@@PEAVOBJECT@@EGI@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall GdiHandleManager::SetEntryObject(GdiHandleManager *this, unsigned int a2, struct OBJECT *a3)
{
  __int64 v5; // r11
  unsigned int v6; // r8d
  __int64 v7; // rcx
  __int64 v8; // r11
  __int64 v9; // rax
  __int64 v10; // r8
  __int64 v11; // r10
  unsigned int v12; // r8d
  __int64 v13; // rcx
  __int64 v14; // rax

  if ( a2 >= 0x10000 )
  {
    if ( *(_DWORD *)this <= 0x10000u )
    {
      a2 = (unsigned __int16)a2;
    }
    else
    {
      v5 = *((_QWORD *)this + 2);
      v6 = *(_DWORD *)(v5 + 2056);
      if ( (unsigned __int16)a2 >= v6 + ((*(unsigned __int16 *)(v5 + 2) + 0xFFFF) << 16) )
      {
        v10 = 0LL;
      }
      else
      {
        if ( (unsigned __int16)a2 >= v6 )
          v7 = (((unsigned __int16)a2 - v6) >> 16) + 1;
        else
          v7 = 0LL;
        v8 = *(_QWORD *)(v5 + 8 * v7 + 8);
        if ( (_DWORD)v7 )
          v9 = (unsigned __int16)a2 + ((1 - (_DWORD)v7) << 16) - v6;
        else
          v9 = (unsigned __int16)a2;
        v10 = 0LL;
        if ( (unsigned int)v9 < *(_DWORD *)(v8 + 20) )
          v10 = *(_QWORD *)v8 + 24 * v9;
      }
      if ( *(unsigned __int8 *)(v10 + 13) == HIWORD(a2) )
        a2 = (unsigned __int16)a2;
    }
  }
  v11 = *((_QWORD *)this + 2);
  v12 = *(_DWORD *)(v11 + 2056);
  if ( a2 < v12 + ((*(unsigned __int16 *)(v11 + 2) + 0xFFFF) << 16) )
  {
    if ( a2 >= v12 )
      v13 = ((a2 - v12) >> 16) + 1;
    else
      v13 = 0LL;
    v14 = *(_QWORD *)(v11 + 8 * v13 + 8);
    if ( (_DWORD)v13 )
      a2 += ((1 - (_DWORD)v13) << 16) - v12;
    if ( a2 < *(_DWORD *)(v14 + 20) )
      *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v14 + 24) + 8 * ((unsigned __int64)a2 >> 8)) + 16LL * (unsigned __int8)a2 + 8) = a3;
  }
}
