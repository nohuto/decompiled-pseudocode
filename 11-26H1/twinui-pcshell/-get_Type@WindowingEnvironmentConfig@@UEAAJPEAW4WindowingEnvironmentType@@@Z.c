/*
 * XREFs of ?get_Type@WindowingEnvironmentConfig@@UEAAJPEAW4WindowingEnvironmentType@@@Z @ 0x18044A480
 * Callers:
 *     <none>
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18006B898 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall WindowingEnvironmentConfig::get_Type(
        WindowingEnvironmentConfig *this,
        enum WindowingEnvironmentType *a2,
        __int64 a3,
        const char *a4)
{
  __int64 result; // rax
  int v5; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  try
  {
    if ( !*((_QWORD *)this + 4) )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x27,
        (int)"pcshell\\twinui\\windowingenvironment\\lib\\windowingenvironmentconfig.cpp",
        (const char *)0x8000FFFFLL,
        v5);
    *(_DWORD *)a2 = *((_DWORD *)this + 14);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x2E,
                           (int)"pcshell\\twinui\\windowingenvironment\\lib\\windowingenvironmentconfig.cpp",
                           a4);
  }
  return result;
}
