/*
 * XREFs of ?GetDesktopReplacementVisualForDesktop@CWindowList@@QEAAPEAVCDesktopWindowReplacement@@_K@Z @ 0x18004CC90
 * Callers:
 *     ?DestroyDesktopWindowReplacement@CDesktopManager@@SAX_K@Z @ 0x18004CB00 (-DestroyDesktopWindowReplacement@CDesktopManager@@SAX_K@Z.c)
 *     ?CreateDesktopWindowReplacement@CDesktopManager@@SAX_K@Z @ 0x18004CB60 (-CreateDesktopWindowReplacement@CDesktopManager@@SAX_K@Z.c)
 * Callees:
 *     <none>
 */

struct CDesktopWindowReplacement *__fastcall CWindowList::GetDesktopReplacementVisualForDesktop(
        CWindowList *this,
        __int64 a2)
{
  __int64 v2; // rbx
  _QWORD *v3; // rax
  _QWORD v5[2]; // [rsp+20h] [rbp-68h] BYREF
  __int128 v6; // [rsp+30h] [rbp-58h]
  __int128 v7; // [rsp+40h] [rbp-48h]
  __int128 v8; // [rsp+50h] [rbp-38h]
  __int64 v9; // [rsp+60h] [rbp-28h]
  char v10; // [rsp+68h] [rbp-20h]
  __int128 v11; // [rsp+70h] [rbp-18h]

  v5[0] = a2;
  v2 = 0LL;
  v6 = 0LL;
  v5[1] = 0LL;
  v7 = 0LL;
  v8 = 0LL;
  v10 = 0;
  v11 = 0LL;
  v9 = -1LL;
  v3 = RtlLookupElementGenericTable((PRTL_GENERIC_TABLE)((char *)this + 8), v5);
  if ( v3 )
    return (struct CDesktopWindowReplacement *)v3[4];
  return (struct CDesktopWindowReplacement *)v2;
}
