/*
 * XREFs of ?GetFirstViewTypeIfExists@TouchKeyboardExperienceManager@@AEAA_NIAEAW4CoreKeyboardViewType@Core@Text@Internal@UI@Windows@@@Z @ 0x18029107C
 * Callers:
 *     ?GetFirstViewTypeIfExists@TouchKeyboardExperienceManager@@UEAAJIPEAW4CoreKeyboardViewType@Core@Text@Internal@UI@Windows@@PEAE@Z @ 0x18020E1F0 (-GetFirstViewTypeIfExists@TouchKeyboardExperienceManager@@UEAAJIPEAW4CoreKeyboardViewType@Core@T.c)
 * Callees:
 *     ?IsValid@KBViewInfo@@QEBA_NXZ @ 0x180097D88 (-IsValid@KBViewInfo@@QEBA_NXZ.c)
 *     ?GetFirstViewType@KBViewInfo@@QEBAIXZ @ 0x18018A2F8 (-GetFirstViewType@KBViewInfo@@QEBAIXZ.c)
 */

char __fastcall TouchKeyboardExperienceManager::GetFirstViewTypeIfExists(
        RTL_SRWLOCK *this,
        int a2,
        enum Windows::UI::Internal::Text::Core::CoreKeyboardViewType *a3)
{
  RTL_SRWLOCK *v3; // rbx
  KBViewInfo **Ptr; // r10
  KBViewInfo **i; // r9
  int FirstViewType; // eax

  v3 = this + 53;
  *(_DWORD *)a3 = 11;
  AcquireSRWLockShared(this + 53);
  Ptr = (KBViewInfo **)this[55].Ptr;
  for ( i = (KBViewInfo **)this[54].Ptr; i != Ptr && (!KBViewInfo::IsValid(*i) || *((_DWORD *)*i + 26) != a2); i += 2 )
    ;
  if ( i == this[55].Ptr || (FirstViewType = KBViewInfo::GetFirstViewType(*i), FirstViewType == -1) )
  {
    if ( v3 )
      ReleaseSRWLockShared(v3);
    return 0;
  }
  else
  {
    *(_DWORD *)a3 = FirstViewType;
    if ( v3 )
      ReleaseSRWLockShared(v3);
    return 1;
  }
}
