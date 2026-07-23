/*
 * XREFs of RtlGetFeatureToggleConfiguration @ 0x180147870
 * Callers:
 *     <none>
 * Callees:
 *     RtlReleaseSRWLockShared @ 0x180018AF0 (RtlReleaseSRWLockShared.c)
 *     RtlAcquireSRWLockExclusive @ 0x180029A40 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18002A010 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockShared @ 0x180036B90 (RtlAcquireSRWLockShared.c)
 *     RtlpFtQueryConfiguration @ 0x180147B2C (RtlpFtQueryConfiguration.c)
 *     __ft_array_insert @ 0x180147CC8 (__ft_array_insert.c)
 *     __ft_marker_array_lower_bound @ 0x180147DD8 (__ft_marker_array_lower_bound.c)
 *     __ft_marker_array_set_flags @ 0x180147EF4 (__ft_marker_array_set_flags.c)
 *     __ft_process_marker_get_handle @ 0x180147FA0 (__ft_process_marker_get_handle.c)
 */

__int64 __fastcall RtlGetFeatureToggleConfiguration(unsigned int a1, unsigned __int64 a2)
{
  unsigned __int64 v3; // rsi
  BOOL v5; // r14d
  int v6; // ebp
  __int64 v7; // rbx
  __int64 v8; // rax
  __int64 Configuration; // rdi
  int v11; // eax
  __int64 handle; // rbx
  __int64 *v13; // rax

  v3 = HIDWORD(a2);
  v5 = (HIDWORD(a2) & 0xE000000) != 0x8000000 && (HIDWORD(a2) & 0x700000) != 0x400000;
  v6 = 0;
  v7 = 0LL;
  if ( v5 )
  {
    RtlAcquireSRWLockShared(&stru_1801CBE10);
    v8 = _ft_marker_array_lower_bound(&_ft_g_api_info, a1);
    if ( v8 < qword_1801CBDE8 && *(_DWORD *)(_ft_g_api_info + 12 * v8) == a1 )
    {
      v7 = *(_QWORD *)(_ft_g_api_info + 12 * v8 + 4);
      v6 = 1;
    }
    RtlReleaseSRWLockShared(&stru_1801CBE10);
    if ( v6 )
    {
      if ( (v7 & 0x100) == 0 )
        return v7;
    }
  }
  Configuration = RtlpFtQueryConfiguration(a1, a2);
  v11 = Configuration & 0xF;
  if ( v6 )
    Configuration = __PAIR64__(HIDWORD(v7), v7 & 0xFFFFFEFF | ((((unsigned int)Configuration >> 8) & 1) << 8));
  if ( v5 || v11 )
  {
    RtlAcquireSRWLockExclusive(&stru_1801CBE10);
    _ft_marker_array_set_flags(&_ft_g_api_info, a1, Configuration);
    if ( !v6 && (v3 & 0xE000000) == 0x6000000 )
    {
      handle = _ft_process_marker_get_handle(a1);
      if ( handle )
      {
        v13 = (__int64 *)_ft_array_insert(
                           (unsigned int)&unk_1801CBDF8,
                           (unsigned int)&qword_1801CBE00,
                           (unsigned int)&unk_1801CBE08,
                           8,
                           qword_1801CBE00);
        if ( v13 )
          *v13 = handle;
      }
    }
    RtlReleaseSRWLockExclusive(&stru_1801CBE10);
  }
  return Configuration;
}
