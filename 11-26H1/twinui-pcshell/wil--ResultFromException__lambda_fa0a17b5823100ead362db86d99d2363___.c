/*
 * XREFs of wil::ResultFromException__lambda_fa0a17b5823100ead362db86d99d2363___ @ 0x180297C04
 * Callers:
 *     ?GetFrameForMonitor@WindowSizeConverter@@AEAAJPEAUIImmersiveMonitor@@PEAPEAUIApplicationFrame@@@Z @ 0x180297BA4 (-GetFrameForMonitor@WindowSizeConverter@@AEAAJPEAUIImmersiveMonitor@@PEAPEAUIApplicationFrame@@@.c)
 * Callees:
 *     _lambda_fa0a17b5823100ead362db86d99d2363_::operator() @ 0x180297C3C (_lambda_fa0a17b5823100ead362db86d99d2363_--operator().c)
 */

__int64 wil::ResultFromException__lambda_fa0a17b5823100ead362db86d99d2363___()
{
  wil *v0; // rcx
  __int64 result; // rax

  try
  {
    lambda_fa0a17b5823100ead362db86d99d2363_::operator()();
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::ResultFromCaughtException(v0);
  }
  return result;
}
