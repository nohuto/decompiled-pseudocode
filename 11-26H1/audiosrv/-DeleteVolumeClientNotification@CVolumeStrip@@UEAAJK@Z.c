/*
 * XREFs of ?DeleteVolumeClientNotification@CVolumeStrip@@UEAAJK@Z @ 0x18006A070
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Copy_memmove@PEAU_GUID@@PEAU1@@std@@YAPEAU_GUID@@PEAU1@00@Z @ 0x18005C018 (--$_Copy_memmove@PEAU_GUID@@PEAU1@@std@@YAPEAU_GUID@@PEAU1@00@Z.c)
 *     WPP_SF_qD @ 0x1800CFEB4 (WPP_SF_qD.c)
 */

__int64 __fastcall CVolumeStrip::DeleteVolumeClientNotification(CVolumeStrip *this, int a2)
{
  char *v4; // rbx
  _DWORD *v5; // rcx
  _DWORD *i; // r8
  bool v7; // zf
  _DWORD *j; // rdx

  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_qD(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      17LL,
      &WPP_64ceff971abf396a2d7f0130c978516a_Traceguids,
      (char *)this - 8,
      a2);
  }
  v4 = (char *)this + 16;
  EnterCriticalSection((LPCRITICAL_SECTION)v4);
  v5 = (_DWORD *)*((_QWORD *)v4 + 6);
  for ( i = (_DWORD *)*((_QWORD *)v4 + 5); i != v5; i += 2 )
  {
    if ( *i == a2 )
    {
      v7 = i[1]-- == 1;
      if ( v7 )
        break;
    }
  }
  if ( i != v5 )
  {
    for ( j = i + 2; j != v5; j += 2 )
    {
      if ( *j == a2 )
      {
        v7 = j[1]-- == 1;
        if ( v7 )
          continue;
      }
      *(_QWORD *)i = *(_QWORD *)j;
      i += 2;
    }
    if ( i != v5 )
      *((_QWORD *)v4 + 6) = std::_Copy_memmove<_GUID *,_GUID *>(v5, *((_QWORD *)v4 + 6), i);
  }
  if ( v4 )
    LeaveCriticalSection((LPCRITICAL_SECTION)v4);
  return 0LL;
}
