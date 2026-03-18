/*
 * XREFs of ?SaveAttributesHelper@DCOBJ@@AEAAHXZ @ 0x140040510
 * Callers:
 *     ??0APIDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x140040038 (--0APIDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 * Callees:
 *     HmgPentryFromPobj @ 0x140019EC0 (HmgPentryFromPobj.c)
 *     ?SaveAttributes@DC@@QEAAHPEAU_DC_ATTR@@@Z @ 0x140040720 (-SaveAttributes@DC@@QEAAHPEAU_DC_ATTR@@@Z.c)
 *     ?GreDecodeUserModePointer@@YAPEAXPEAX@Z @ 0x140041EB0 (-GreDecodeUserModePointer@@YAPEAXPEAX@Z.c)
 */

__int64 __fastcall DCOBJ::SaveAttributesHelper(DCOBJ *this)
{
  unsigned int CurrentProcessId; // eax
  __int64 v3; // rdx
  unsigned int v4; // ebx
  unsigned int v5; // esi
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rax
  struct _DC_ATTR *v9; // rax

  CurrentProcessId = (unsigned int)PsGetCurrentProcessId();
  v3 = *(_QWORD *)this;
  v4 = 0;
  v5 = CurrentProcessId & 0xFFFFFFFC;
  if ( **(_QWORD **)this )
  {
    v6 = HmgPentryFromPobj(*((_QWORD *)this + 2));
  }
  else
  {
    v6 = v3 + 2152;
    *(_OWORD *)(v3 + 2152) = 0LL;
    *(_QWORD *)(v3 + 2168) = 0LL;
    *(_DWORD *)(v3 + 2160) = -2147483630;
    *(_QWORD *)(v3 + 2168) = 0LL;
  }
  if ( v5 != (*(_DWORD *)(v6 + 8) & 0xFFFFFFFE) )
    return 1LL;
  v7 = *(_QWORD *)this;
  if ( **(_QWORD **)this )
  {
    v8 = HmgPentryFromPobj(*((_QWORD *)this + 2));
  }
  else
  {
    v8 = v7 + 2152;
    *(_OWORD *)(v7 + 2152) = 0LL;
    *(_QWORD *)(v7 + 2168) = 0LL;
    *(_DWORD *)(v7 + 2160) = -2147483630;
    *(_QWORD *)(v7 + 2168) = 0LL;
  }
  if ( !v8 )
    return 1LL;
  v9 = (struct _DC_ATTR *)GreDecodeUserModePointer(*(void **)(v8 + 16));
  if ( !v9 )
    return 1LL;
  LOBYTE(v4) = (unsigned int)DC::SaveAttributes(*(DC **)this, v9) != 0;
  return v4;
}
